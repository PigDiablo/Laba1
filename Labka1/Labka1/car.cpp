#include "car.h"
#include <iostream>


car::car(string mark, string model, string EngineVolume, string Color, string GearType):
	transport(mark,model),m_EngineVolume(EngineVolume),m_Color(Color),m_GearType(GearType)
{

}

string car::getEngineVolume()
{
	return m_EngineVolume;
}

string car::getColor()
{
	return m_Color;
}
string car::getGearType()
{
	return m_GearType;
}
void car::setEngineVolume()
{
	string i = "";
	cout << "Vvedite EngineVolume\n";
	cin >> i;
	m_EngineVolume = i;
}
void car::setColor()
{
	string i = "";
	cout << "Vvedite Color\n";
	cin >> i;
	m_Color = i;

}
void car::setGearType()
{
	string i = "";
	cout << "Vvedite GearType\n";
	cin >> i;
	m_GearType = i;
}
void car::setEngineVolumee(string a)
{
	m_EngineVolume = a;
}
void car::setColorr(string a)
{
	m_Color = a;
}
void car::setGearTypee(string a)
{
	m_GearType = a;
}
void car::entercar()
{
	std::cout << "\n";
	std::cout << "\t";
	setmodel();
	std::cout << "\t";
	setmark();
	std::cout << "\t";
	setEngineVolume();
	std::cout << "\t";
	setColor();
	std::cout << "\t";
	setGearType();
}

void car::outcar()
{
	std::cout << "\n";
	std::cout << "FIO : \t\t\t" << getmodel() << "\n";
	std::cout << "Group : \t\t" << getmark() << "\n";
	std::cout << "Kyrs : \t\t\t" << getEngineVolume() << "\n";
	std::cout << "Specialty : \t\t" << getColor() << "\n";
	std::cout << "Middle Ball : \t\t" << getGearType() << "\n";
	std::cout << "\n";
}