//============================================================================
// Name        : PictureExample.cpp
// Author      : Adam
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Picture.h"
using namespace std;

char *init[] = {"Paris", "in the", "Spring"};

int main() {

	Picture p(init, 3);

	cout << p << endl;

//	Picture q = p;
//
//	cout << q << endl;

	Picture q = frame(p);

	cout << q << endl;
	cout << frame(q & (p | q)) << endl;

	return 0;
}
