#include "Basic.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


Basic::Basic()
{
	this->func = 0;
	this->num = 0;
	this->req.clear();
	this->state = 0;
}
void Basic::Disk()
{
	std::ofstream out;
	out.open("req.txt", std::ios::app);
	out << num << " " << func << " "<<state<<" ";
	for (int i=0;i<req.size();i++)
	{
		out << req[i];
	}
	out <<"\n";
}
void Basic::Load(int str)
{	
	std::ifstream lod("req.txt");
	for (int i = 0; i < str; i++) // пропускаем не нужные нам строки (читаем и ничего с ними не делаем)
	{
		std::string g;
		std::getline(lod, g);
		g.clear();
	}
	lod >> num>>func>>state;
	std::getline(lod, req);
	//lod.ignore();
	//lod.close();
}
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
	this->req=buffer;
}
void Basic::setnum(int y)
{
	this->num = y;
}
std::string  Basic::getreq()
{
	return req;
}
bool Basic::getFunc()
{
	return func;
}
bool Basic::getState()
{
	return state;
}
