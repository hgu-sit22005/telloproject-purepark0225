#include "down.h"
#include <cstring>
#include <sstream>	// string stream, cout과 똑같지만 문자열로 출력

Down::Down()
{
	command = new char[strlen("down 20")+1];
	strcpy(command, "down 20");
}

Down::Down(int _value)
{
	std::stringstream sstream;
	sstream << "down " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Down::get_delay()
{ 
	return 2; 
}