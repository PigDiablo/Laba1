#include <string>
#include <iostream>
#include "transport.h"

using namespace std;

class bus : transport
{
public:
 bus (string mark, string model, int Seats, int AllSeats, string , string Destination) : transport (mark, model)   // ����� � ������ ���������� � ����������� � ����������� ��� ������ transport
 {
 	m_Seats = Seats;
 	m_AllSeats = AllSeats;
 	m_Destination = Destination;
 }
~bus()
    {
    }
    
void print();

private:
    
int m_Seats;
string m_AllSeats;
string m_Destination;		
    	
};
