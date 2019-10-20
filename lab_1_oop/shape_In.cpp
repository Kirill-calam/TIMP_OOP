#include "stdafx.h"
#include "shape_atd.h"
// Необходима подключить информацию обо всех имеющихся
// геометрических фигурах
#include "rectangle_atd.h"
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// Ввод параметров обобщенной фигуры
	shape* shape::In(ifstream &ifst) {
		shape *sp;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			sp = new rectangle;
			break;
		case 2:
			sp = new circle;
			break;
		default:
			return 0;
		}
		sp->InData(ifst);
		return sp;
	}
} // end simple_shapes namespace