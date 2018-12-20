#include "bus.h"
#include <iostream>

bus::bus(string mark, string model, string Seats, string AllSeats, string Destination) :
	transport(mark, model), m_Seats(Seats), m_AllSeats(AllSeats), m_Destination(Destination)
{

}

string bus::getSeats()
{
	return m_Seats;
}

string bus::getAllSeats()
{
	return m_AllSeats;
}
string bus::getDestination()
{
	return m_Destination;
}
void bus::setSeats()
{
	string i = "";
	cout << "Vvedite Seats\n";
	cin >> i;
	m_Seats = i;
}
void bus::setAllSeats()
{
	string i = "";
	cout << "Vvedite AllSeats\n";
	cin >> i;
	m_AllSeats = i;

}
void bus::setDestination()
{
	string i = "";
	cout << "Vvedite Destination\n";
	cin >> i;
	m_Destination = i;
}
void bus::setSeatss(string a)
{
	m_Seats = a;
}
void bus::setAllSeatss(string a)
{
	m_AllSeats = a;
}
void bus::setDestinationn(string a)
{
	m_Destination = a;
}
void bus::enterbus()    // vvod stydenta
{
	std::cout << "\n";
	std::cout << "\t";
	setmodel();
	std::cout << "\t";
	setmark();
	std::cout << "\t";
	setSeats();
	std::cout << "\t";
	setAllSeats();
	std::cout << "\t";
	setDestination();
}

void bus::outbus()
{
	std::cout << "\n";
	std::cout << "FIO : \t\t\t" << getmodel() << "\n";
	std::cout << "Group : \t\t" << getmark() << "\n";
	std::cout << "Kyrs : \t\t\t" << getSeats() << "\n";
	std::cout << "Specialty : \t\t" << getAllSeats() << "\n";
	std::cout << "Middle Ball : \t\t" << getDestination() << "\n";
	std::cout << "\n";
}