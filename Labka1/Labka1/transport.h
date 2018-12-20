#pragma once
#include <string>
#include <iostream>

using namespace std;

class transport
{
protected:
	string m_mark;
	string m_model;
public:
	transport(string mark = "", string model = "");
	
	virtual ~transport();
	string getmark();
	string getmodel();
	void setmark();
	void setmarkk(std::string mark);
	void setmodel();
	void setmodell(std::string model);
	};
