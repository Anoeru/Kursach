#include "Basic.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


Basic::Basic()
{
	this->func = 0;
	this->num = 0;
	memset(this->req, 0, 140);
	this->state = 0;
}
void Basic::Disk()
{
	std::ofstream out;
	out.open("req.txt", std::ios::app);
	out << num << " " << func << " "<<state<<" ";
	char c=0;
	int n = 0;
	while ((c != '\n')&&(n<140))
	{
		c = req[n];
		n++;
		out << c;
	}
	out <<"\n";
}
void Basic::Load()
{
	std::ifstream lod("req.txt");
	lod >> num>>func>>state;
	lod.getline(req, 140);
	lod.close();
	this->num = num;
	this->func = func;
	this->state = state;	
}
/*void Basic::getinfo()
{
	std::cout << "number " << num;
	if (func == 1)
	{
		std::cout << " functional\n";
	}
	else
	{
		std::cout << " not functional\n";
	}
	unsigned int size = 100;
	for (int i = 0; i < size; i++)
	{
		std::cout << name[i] << " ";
	}
	std::cout << " :\n";
	size = 1000;
	for (int i = 0; i < size; i++)
	{
		std::cout << req[i] << " ";
	}
	std::cout << "\n======================\n";
	if (state == 1)
	{
		std::cout << " done\n";
	}
	else
	{
		std::cout << " not done\n";
	}
}*/
int Basic::getNum()
{
	return num;
}
void Basic::setState(bool st)
{
	this->state = st;
}
void Basic::setF(bool f)
{
	this->func = f;
}
void Basic::setreq(std::string &buffer)
{
	for (size_t idx = 0; idx < buffer.length(); idx++)
		req[idx] = buffer[idx];
}
void Basic::setnum(int y)
{
	this->num = y;
}
char Basic::getreq(int i)
{
	return req[i];
}
bool Basic::getFunc()
{
	return func;
}
bool Basic::getState()
{
	return state;
}