#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


class Basic
{
protected:
	int num;
	std::string req;
	bool func;
	bool state;
public:
	Basic();
	int getNum();
	bool getState();
	bool getFunc();
	void setnum(int);
	void setreq(std::string&);
	void Load(int);
	void setF(bool);
	void setState(bool);
	void Disk();
	std::string getreq();
	~Basic() {}
};
