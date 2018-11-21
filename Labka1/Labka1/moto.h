#include <string>
#include <iostream>
#include "transport.h"

using namespace std;

class moto : transport
{
public:
 moto (string mark, string model, int EngineVolume, int EngienPower, string Terrain) : transport (mark, model)   // марка и модель передается в конструктор с параметрами для класса transport
 {
 	m_EngineVolume = EngineVolume;
 	m_EngienPower = EngienPower;
	m_Terrain = Terrain;
 }
~moto()
    {
    }
    
void print();

private:
    
int m_EngineVolume;
string m_EngienPower;
string m_Terrain;		
    	
};
