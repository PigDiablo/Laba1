#pragma once
#include <string>
#include <iostream>
#include "transport.h"

using namespace std;

class bus : public transport
{
public:
	string m_Seats;
	string m_AllSeats;
	string m_Destination;
	
	bus(string mark = "", string model = "", string Seats = "", string AllSeats = "", string Destination = "");  // марка и модель передается в конструктор с параметрами для класса transport
 
	string getSeats();
	string getAllSeats();
	string getDestination();
	void setSeats();
	void setAllSeats();
	void setDestination();
	void setSeatss(string Seats);
	void setAllSeatss(string AllSeats);
	void setDestinationn(string Destination);
	void enterbus();
	void outbus();
};
