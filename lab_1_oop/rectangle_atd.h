#pragma once
#ifndef __rectangle_atd__
#define __rectangle_atd__
// Требеутся описание класса shape
#include "shape_atd.h"
namespace simple_shapes {
	// прямоугольник
	class rectangle : public shape {
		int x, y; // координаты
		char colour[10];
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод
		rectangle() {} // создание без инициализации.
	};
} // end simple_shapes namespace
#endif
