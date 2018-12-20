#pragma once 
#include <string>
#include <iostream>
#include "transport.h"

using namespace std;

class moto : public transport
{
public:
	string m_EngineVolume;
	string m_EnginePower;
	string m_Terrain;
	
	moto(string mark = "", string model = "", string EngineVolume = "", string EngienPower = "", string Terrain = "");   // марка и модель передается в конструктор с параметрами для класса transport
	
	string getEngineVolume();
	string getEnginePower();
	string getTerrain();
	
	void setEngineVolume();
	void setEnginePower();
	void setTerrain();
	void setEngineVolumee(string a);
	void setEnginePowerr(string a);
	void setTerrainn(string a);
	void entermoto();
	void outmoto();
};
