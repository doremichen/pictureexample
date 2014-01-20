/*
 * Picture.h
 *
 *  Created on: 2014/1/16
 *      Author: AdamChen
 */

#ifndef PICTURE_H_
#define PICTURE_H_

#include <ostream>

using namespace std;

class Picture {
public:
	Picture();
	Picture(const char* const*, int );
	Picture(const Picture&);
	~Picture();

	Picture& operator=(const Picture&);
	int max(int, int);
	void init(int, int);
	void clear(int, int, int, int);

	friend ostream& operator<<(ostream&, const Picture&);
	friend Picture frame(const Picture&);
	friend Picture operator&(const Picture&, const Picture&);
	friend Picture operator|(const Picture&, const Picture&);

private:
	int height, width;
	char *data;

//	friend ostream& operator<<(ostream&, const Picture&);

	void copyblock(int, int, const Picture&);

	char& position(int row, int col) {
		return data[row * width + col];
	}

	char position(int row, int col) const {
		return data[row * width + col];
	}
};

ostream& operator<<(ostream&, const Picture&);
Picture frame(const Picture&);
Picture operator&(const Picture&, const Picture&);
Picture operator|(const Picture&, const Picture&);

#endif /* PICTURE_H_ */
