
#include "I2C.h"


// Деинициализация контроллера I2C
void I2C_reset(void)
{
  MDR_I2C->PRL = 0;
  MDR_I2C->PRH = 0;
  MDR_I2C->CTR = 0;
  MDR_I2C->RXD = 0;
  MDR_I2C->STA = 0;
  MDR_I2C->TXD = 0;
  MDR_I2C->CMD = 0;
}


// Инициализация порта для работы модуля I2C
void I2C_port_init(void)
{
  // Конфигурация линий PC0 и PC1 для работы в качестве линий SCL и SDA
  MDR_PORTC->OE     &= ~((1 << 0)  | (1 << 1));   // Направление данных (не используется)
  MDR_PORTC->FUNC   &= ~((3 << 0)  | (3 << 2));   // Сброс битов регистра FUNC
  MDR_PORTC->FUNC   |=  ((2 << 0)  | (2 << 2));   // Функция линий (альтернативная)
  MDR_PORTC->ANALOG |=  ((1 << 0)  | (1 << 1));   // Режим работы линии (цифровой)
  MDR_PORTC->PULL   &= ~((1 << 0)  | (1 << 1));   // Подтяжка к земле (отключены)
  MDR_PORTC->PULL   &= ~((1 << 16) | (1 << 17));  // Подтяжка к земле (отключены)
  MDR_PORTC->PD     &= ~((1 << 0)  | (1 << 1));   // Управление линиями (не используется)
  MDR_PORTC->PD     &= ~((1 << 16) | (1 << 17));  // Триггеры Шмитта (не используются)
  MDR_PORTC->PWR    |=  ((3 << 0)  | (3 << 2));   // Крутизна фронтов (высокая)
  MDR_PORTC->GFEN   &=  ((1 << 0)  | (1 << 1));   // Цифровые фильтры (не используются)
}


// Инициализация модуля I2C
void I2C_init(void)
{
  // Конфигурация порта для работы модуля I2C
  I2C_port_init();

  // Деинициализация контроллера I2C
  I2C_reset();

  // конфигурация модуля I2C
  MDR_I2C->PRL	=	159;      					// младшие 8 бит предделителя тактовой частоты
  MDR_I2C->PRH	=	0;  								// старшие 8 бит предделителя тактовой частоты
  MDR_I2C->CTR	=	((0 << 5)    				// S_I2C: предельная скорость передачи - 400 Кбит/с
									|(0 << 6)   				// EN_INT: прерывания запрещены
									|(1 << 7));  				// EN_I2C: включение модуля I2C
}


// Отправление данных по шине I2C
void I2C_write_data(uint8_t i2c_address,       	// Адрес устройства на шине I2C
                    uint8_t register_address,  	// Адрес регистра памяти устройства
                    uint8_t data)              	// Передаваемые данные
{
  // Ожидание освобождения шины I2C
  while(MDR_I2C->STA & I2C_STA_BUSY);

  // Отправление признака START и инициация передачи
	MDR_I2C->CMD	=	((1 << 7)		// START: отправка START bit
									|(1 << 4));	// WR: начать запись в ведомого
	
	// Задание адреса устройства и признака ЗАПИСИ данных (бит 0 = R/W = 0)
  MDR_I2C->TXD	=	(i2c_address << 1);
	
	// инициация передачи
	MDR_I2C->CMD	=	(1 << 4);		// WR: начать запись в ведомого

  // ожидание завершения передачи - бит TR_PROG
	while(MDR_I2C->STA & (1 << 1))	{;}

//  // Проверка бита подтверждения
//  if (MDR_I2C->STA & (1 << 7))
//    return;

  // Отправление адреса регистра
  MDR_I2C->TXD	=	register_address;
  // инициация передачи
	MDR_I2C->CMD	=	(1 << 4);			// WR: начать запись в ведомого

  // ожидание завершения передачи - бит TR_PROG
	while(MDR_I2C->STA & (1 << 1))	{;}

//  // Проверка получения бита подтверждения
//  if (MDR_I2C->STA & (1 << 7))
//    return;

  // Отправление данных
  MDR_I2C->TXD	=	data;
  // инициация передачи
	MDR_I2C->CMD	=	(1 << 4);			// WR: начать запись в ведомого

  // ожидание завершения передачи - бит TR_PROG
	while(MDR_I2C->STA & (1 << 1))	{;}

//  // Проверка получения бита подтверждения
//  if (MDR_I2C->STA & (1 << 7))
//    return;

	// Отправление признака STOP
	MDR_I2C->CMD	=	(1 << 6);
  MDR_I2C->CMD	=	0;
}


// Получение данных по шине I2C
uint8_t I2C_read_data(uint8_t i2c_address,				// Адрес устройства на шине I2C
                      uint8_t register_address)		// Адрес регистра памяти устройства
{
  uint8_t data;

  // Ожидание освобождения шины I2C
  while(MDR_I2C->STA & (1 << 6))	{;}

  // Отправление признака START и инициация передачи
	MDR_I2C->CMD	=	((1 << 7)			// START: отправка START bit
									|(1 << 4));		// WR: начать запись в ведомого
	
	// Задание адреса устройства и признака ЗАПИСИ данных (бит 0 = R/W = 0)
  MDR_I2C->TXD	=	(i2c_address << 1);
	
	// инициация передачи
	MDR_I2C->CMD	=	(1 << 4);			// WR: начать запись в ведомого

  // ожидание завершения передачи - бит TR_PROG
	while(MDR_I2C->STA & (1 << 1))	{;}
		
	//while(MDR_I2C->STA & (1 << 7))	{;}

//  // Проверка получения бита подтверждения
//  if (MDR_I2C->STA & (1 << 7))
//    return 0;

  // Отправление адреса регистра
  MDR_I2C->TXD	=	register_address;
	// инициация передачи
	MDR_I2C->CMD	=	(1 << 4);			// WR: начать запись в ведомого

  // ожидание завершения передачи - бит TR_PROG
	while(MDR_I2C->STA & (1 << 1))	{;}

//  // Проверка получения бита подтверждения
//  if (MDR_I2C->STA & (1 << 7))
//    return 0;

  // Отправление повторного признака START и инициация передачи
  MDR_I2C->CMD	=	((1 << 7)			// START: отправка START bit
									|(1 << 4));		// WR: начать запись в ведомого
	
	// Задание адреса устройства и признака ЧТЕНИЯ данных (бит 0 = R/W = 1)
  MDR_I2C->TXD	=	(i2c_address << 1) | 0x01;
	
	// инициация передачи
	MDR_I2C->CMD	=	(1 << 4);			// WR: начать запись в ведомого

  // ожидание завершения передачи - бит TR_PROG
	while(MDR_I2C->STA & (1 << 1))	{;}

//  // Проверка получения бита подтверждения
//  if (MDR_I2C->STA & (1 << 7))
//    return 0;

  // RD: начать чтение из ведомого
	MDR_I2C->CMD	=	((1 << 5)			// RD: начать чтение из ведомого
									|(1 << 3));		// ACK: отправить NACK
	
	// ожидание завершения приема - бит TR_PROG
  while(MDR_I2C->STA & (1 << 1))	{;}

  // Чтение принятых данных
  data	=	MDR_I2C->RXD;

  // отправление признака STOP
  MDR_I2C->CMD	=	(1 << 6);
	MDR_I2C->CMD	=	0;

  return data;
}


// последовательное получение нескольких пакетов данных
void I2C_read_data_burst(uint8_t i2c_address,       // Адрес устройства на шине I2C
                         uint8_t register_address,  // Адрес начального регистра памяти устройства
                         uint8_t amount,            // Количество циклов чтения
                         uint8_t *buffer)           // Буфер для хранения результатов чтения
{
  // Ожидание освобождения шины I2C
  while(MDR_I2C->STA & (1 << 6))	{;}

  // Отправление признака START и инициация передачи
	MDR_I2C->CMD	=	((1 << 7)			// START: отправка START bit
									|(1 << 4));		// WR: начать запись в ведомого
	
	// Задание адреса устройства и признака ЗАПИСИ данных (бит 0 = R/W = 0)
  MDR_I2C->TXD	=	(i2c_address << 1);
	
	// инициация передачи
	MDR_I2C->CMD	=	(1 << 4);			// WR: начать запись в ведомого

  // ожидание завершения передачи - бит TR_PROG
	while(MDR_I2C->STA & (1 << 1))	{;}

//  // Проверка получения бита подтверждения
//  if (MDR_I2C->STA & (1 << 7))
//    return 0;

  // Отправление адреса начального регистра
  MDR_I2C->TXD	=	register_address;
	// инициация передачи
	MDR_I2C->CMD	=	(1 << 4);			// WR: начать запись в ведомого

  // ожидание завершения передачи - бит TR_PROG
	while(MDR_I2C->STA & (1 << 1))	{;}

//  // Проверка получения бита подтверждения
//  if (MDR_I2C->STA & (1 << 7))
//    return 0;

  // Отправление повторного признака START и инициация передачи
  MDR_I2C->CMD	=	((1 << 7)			// START: отправка START bit
									|(1 << 4));		// WR: начать запись в ведомого
	
	// Задание адреса устройства и признака ЧТЕНИЯ данных (бит 0 = R/W = 1)
  MDR_I2C->TXD	= (i2c_address << 1) | 0x01;
	
	// инициация передачи
	MDR_I2C->CMD	=	(1 << 4);			// WR: начать запись в ведомого

  // ожидание завершения передачи - бит TR_PROG
	while(MDR_I2C->STA & (1 << 1))	{;}

//  // Проверка получения бита подтверждения
//  if (MDR_I2C->STA & (1 << 7))
//    return 0;
	
	// Цикл чтения заданных регистров, за исключением последнего
	for(uint8_t i = 0; i < (amount - 1); i++)
	{
		// RD: начать чтение из ведомого
		MDR_I2C->CMD = (1 << 5);
	
		// ожидание завершения приема - бит TR_PROG
		while(MDR_I2C->STA & (1 << 1))	{;}

		// запись принятых данных в буфер
		buffer[i] = MDR_I2C->RXD;	
	}
	
	// Чтение последнего регистра
	// RD: начать чтение из ведомого
	MDR_I2C->CMD	=	((1 << 5)			// RD: начать чтение из ведомого
									|(1 << 3));		// ACK: отправить NACK
	
	// ожидание завершения приема - бит TR_PROG
	while(MDR_I2C->STA & (1 << 1))	{;}

	// запись принятых данных в буфер
	buffer[amount - 1] = MDR_I2C->RXD;
		
//  // отправление NACK
//	MDR_I2C->CMD = (1 << 3);

  // отправление признака STOP
  MDR_I2C->CMD = (1 << 6);
	MDR_I2C->CMD = 0;
}
