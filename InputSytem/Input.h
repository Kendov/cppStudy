#pragma once

#include <conio.h>
#include <string>


class GenInput {
	
	int key = 0;
	char ascKey[1];
	
	void setPrivateKey();


public:
	//return a key number value whithout stop the program
	int getKeyCode();

	//return the key pressed whithout stop the program
	std::string getKey();

};

#define keyQ 113
#define keyW 119
#define keyE 101
#define keyR 114
#define keyT 116




