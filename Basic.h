#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


class Basic
{
protected:
	int num;
	char *req=new char[140];
	bool func;
	bool state;
public:
	Basic();
	int getNum();
	bool getState();
	bool getFunc();
	void setnum(int);
	void setreq(std::string&);
	void Load();
	//void getinfo();
	void setF(bool);
	void setState(bool);
	void Disk();
	char getreq(int);
	~Basic() {}
};