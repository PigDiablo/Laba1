#pragma once
#include <string>
#include <iostream>
#include "transport.h"

using namespace std;

class car : public transport
{
public:
	string m_EngineVolume;
	string m_Color;
	string m_GearType;

	car(string mark="", string model="", string EngineVolume="", string Color="", string GearType="");


	string getEngineVolume();
	string getColor();
	string getGearType();
	void setEngineVolume();
	void setColor();
	void setGearType();
	void setEngineVolumee(string a);
	void setColorr(string a);
	void setGearTypee(string a);
	void entercar();
	void outcar();
};





