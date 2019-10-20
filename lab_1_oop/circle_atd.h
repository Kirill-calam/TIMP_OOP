#pragma once
#ifndef __triangle_atd__
#define __triangle_atd__
// Требуется описание класса shape
#include "shape_atd.h"
namespace simple_shapes {
	// треугольник
	class circle : public shape {
		int x, R; // радиус и координата центра круга
		char colour[10];
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод
		circle() {} // создание без инициализации.
	};
} // end simple_shapes namespace
#endif