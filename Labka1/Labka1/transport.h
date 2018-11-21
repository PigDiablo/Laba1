#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>
#include <iostream>

using namespace std;

class transport
{
public:
	transport (string mark, string model)
	{
	m_mark = mark;
	m_model = model;
	}

	transport()
	{
		m_mark = "";
		m_model = "";
	}

	
	~transport()
    {
    }

protected:
	
 string m_mark;
 string m_model;
   
};

#endif
 
