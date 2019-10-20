#include "stdafx.h"
#include "container_atd.h"
using namespace std;
namespace simple_shapes {
	// Ввод содержимого контейнера
	void container::In(ifstream &ifst) {
		while (!ifst.eof()) {
			if ((cont[len] = shape::In(ifst)) != 0) {
				len++;
			}
		}
	}
} // end simple_shapes namespace

