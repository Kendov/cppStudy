#include "Input.h"

int GenInput::getKeyCode() {

	setPrivateKey();
	
	return key;
	

}

void GenInput::setPrivateKey() {
	if (_kbhit()) {
		
		GenInput::key = _getch();
		

	}
}

std::string GenInput::getKey() {

	setPrivateKey();
	
	ascKey[0] = key;
	/*if (ascKey[0] == 32) {
		return "Space";
	}*/

	switch (ascKey[0])
	{
	case 32:
		return "Space";
		
	case 13:
		return "Enter";
	case 27:
		return "Esc";
	default:
		break;
	}
	std::string mapedKey = ascKey;
	return mapedKey.substr(0, 1);
	

}