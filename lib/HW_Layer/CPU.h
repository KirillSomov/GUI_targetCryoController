
#ifndef CPU_H
	#define CPU_H


	// подключение заголовочных файлов модулей проекта
	#include "link.h"


	// прототипы функций
	void Clock_Set(void);			// тактирование
	void PLL_init(void);			// инициализация умножителя
	void CPU_set(void);				// настройка для 80 MHz
	void CPU_init(void);			// инициализация CPU


#endif
