// lab_1_oop.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "stdafx.h"
#include <fstream>
#include "container_atd.h"
using namespace std;

using namespace simple_shapes;
int main(int argc, char* argv[])
{
	//if (argc != 3)
	//{
	//	cout << "incorrect command line! "
	//		"Waited: command in_file out_file"
	//		<< endl;
	//	exit(1);
	//}
	argv[1] = "in.txt";
	argv[2] = "out.txt";

	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	cout << "Start" << endl;
	container c;
	c.In(ifst);
	ofst << "Filled container. " << endl;
	c.Out(ofst);
	c.Clear();
	ofst << "Empty container. " << endl;
	c.Out(ofst);
	cout << "Stop" << endl;
	return 0;
}
