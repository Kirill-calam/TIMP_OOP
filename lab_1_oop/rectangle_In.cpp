#include "stdafx.h"
#include "rectangle_atd.h"
using namespace std;
namespace simple_shapes {
	// ¬вод параметров пр€моугольника
	void rectangle::InData(ifstream &ifst) {
		ifst >> x >> y >> colour;
	}
} // end simple_shapes namespac