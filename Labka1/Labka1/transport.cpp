#include "transport.h"


transport::transport(string mark, string model) : m_mark(mark), m_model(model)
{
}

string transport::getmark()
{
	return m_mark;
}
string transport::getmodel()
{
	return m_model;
}

void transport::setmark()
{
	string i="";
	cout << "Vvedite mark\n";
	cin >> i;
	m_mark = i;

}
void transport::setmodel()
{
	string i="";
	cout << "Vvedite model\n";
	cin >> i;
	m_model = i;
}
void transport::setmarkk(std::string mark)
{
	m_mark = mark;
}
void transport::setmodell(std::string model)
{
	m_model = model;
}


transport::~transport()
{
}
