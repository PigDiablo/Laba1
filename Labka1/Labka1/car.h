#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
#include "transport.h"

using namespace std;

class car : transport
{
public:
 car (string mark, string model, int EngineVolume, string Color, string GearType) : transport (mark, model)   // марка и модель передается в конструктор с параметрами для класса transport
 {
 	m_EngineVolume = EngineVolume;
 	m_Color = Color;
 	m_GearType = GearType;
 }

 car()    
 {
	 m_EngineVolume = 0;
	 m_Color = "";
	 m_GearType = "";
 }

~car()
    {
    }
    
void print();

private:
    
int m_EngineVolume;
string m_Color;
string m_GearType;		
    	
};

#endif
