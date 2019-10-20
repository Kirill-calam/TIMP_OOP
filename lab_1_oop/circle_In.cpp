#include "stdafx.h"
#include "circle_atd.h"
using namespace std;
namespace simple_shapes {
	// ¬вод параметров треугольника
	void circle::InData(ifstream &ifst) {
		ifst >> x >> R >> colour;
	}
} // end simple_shapes namespace