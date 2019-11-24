#include "ccw.h"
#include <cstring>
#include <sstream>	// string stream, cout과 똑같지만 문자열로 출력

Ccw::Ccw()
{
	command = new char[strlen("Ccw 20")+1];
	strcpy(command, "Ccw 20");
}

Ccw::Ccw(int _value)
{
	std::stringstream sstream;
	sstream << "Ccw " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Ccw::get_delay()
{ 
	return 5; 
}