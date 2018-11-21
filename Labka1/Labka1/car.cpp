#include "car.h"
#include <iostream>

void car::print()
{
	cout << m_mark << " "
		 << m_model << " "
		 << m_EngineVolume << " "
		 << m_Color << " "
		 << m_GearType << " "
   		 << endl;
}
 