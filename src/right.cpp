#include "right.h"
#include <cstring>
#include <sstream>	// string stream, cout과 똑같지만 문자열로 출력

Right::Right()
{
	command = new char[strlen("Right 20")+1];
	strcpy(command, "Right 20");
}

Right::Right(int _value)
{
	std::stringstream sstream;
	sstream << "Right " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Right::get_delay()
{ 
	return 5; 
}