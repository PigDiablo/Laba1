#include "moto.h"
#include <iostream>

moto::moto(string mark, string model, string EngineVolume, string EnginePower, string Terrain) :
	transport(mark, model), m_EngineVolume(EngineVolume), m_EnginePower(EnginePower), m_Terrain(Terrain)
{

}

string moto::getEngineVolume()
{
	return m_EngineVolume;
}

string moto::getEnginePower()
{
	return m_EnginePower;
}
string moto::getTerrain()
{
	return m_Terrain;
}
void  moto::setEngineVolume()
{
	string i = "";
	cout << "Vvedite EngineVolume\n";
	cin >> i;
	m_EngineVolume = i;
}
void moto::setEnginePower()
{
	string i = "";
	cout << "Vvedite EnginePower\n";
	cin >> i;
	m_EnginePower = i;

}
void moto::setTerrain()
{
	string i = "";
	cout << "Vvedite Terrain\n";
	cin >> i;
	m_Terrain = i;
}
void moto::setEngineVolumee(string a)
{
	m_EngineVolume = a;
}
void moto::setEnginePowerr(string a)
{
	m_EnginePower = a;
}
void moto::setTerrainn(string a)
{
	m_Terrain = a;
}
void moto::entermoto() 
{
	std::cout << "\n";
	std::cout << "\t";
	setmodel();
	std::cout << "\t";
	setmark();
	std::cout << "\t";
	setEngineVolume();
	std::cout << "\t";
	setEnginePower();
	std::cout << "\t";
	setTerrain();
}

void moto::outmoto()
{
	std::cout << "\n";
	std::cout << "FIO : \t\t\t" << getmodel() << "\n";
	std::cout << "Group : \t\t" << getmark() << "\n";
	std::cout << "Kyrs : \t\t\t" << getEngineVolume() << "\n";
	std::cout << "Specialty : \t\t" << getEnginePower() << "\n";
	std::cout << "Middle Ball : \t\t" << getTerrain() << "\n";
	std::cout << "\n";
}