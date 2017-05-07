// cpp_map.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	map<string, int> mymap;
	mymap.insert(make_pair("201", 1));
	mymap.insert(make_pair("202", 2));
	mymap.insert(make_pair("203", 3));
	mymap.insert(make_pair("204", 4));
	mymap.insert(make_pair("COM1", 5));
	mymap.insert(make_pair("COM2", 6));

	cout << mymap["COM3" ] << endl;
    return 0;
}

