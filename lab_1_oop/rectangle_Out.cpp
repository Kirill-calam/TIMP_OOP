#include "stdafx.h"
#include "rectangle_atd.h"
using namespace std;
namespace simple_shapes {
	// Вывод параметров прямоугольника
	void rectangle::Out(ofstream &ofst) {
		ofst << "It is Rectangle: x = " << x
			<< ", y = " << y << ", Colour = " << colour << endl;
	}
} // end simple_sh