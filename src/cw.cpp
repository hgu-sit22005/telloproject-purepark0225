#include "cw.h"
#include <cstring>
#include <sstream>	// string stream, cout과 똑같지만 문자열로 출력

Cw::Cw()
{
	command = new char[strlen("cw 20")+1];
	strcpy(command, "cw 20");
}

Cw::Cw(int _value)
{
	std::stringstream sstream;
	sstream << "cw " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Cw::get_delay()
{ 
	return 2; 
}