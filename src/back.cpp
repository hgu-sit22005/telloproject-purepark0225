#include "back.h"
#include <cstring>
#include <sstream>	// string stream, cout과 똑같지만 문자열로 출력

Back::Back()
{
	command = new char[strlen("back 20")+1];
	strcpy(command, "back 20");
}

Back::Back(int _value)
{
	std::stringstream sstream;
	sstream << "back " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Back::get_delay()
{ 
	return 2; 
}