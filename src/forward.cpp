#include "forward.h"
#include <cstring>
#include <sstream>	// string stream, cout과 똑같지만 문자열로 출력

Forward::Forward()
{
	command = new char[strlen("forward 20")+1];
	strcpy(command, "forward 20");
}

Forward::Forward(int _value)
{
	std::stringstream sstream;
	sstream << "forward " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Forward::get_delay()
{ 
	return 2; 
}