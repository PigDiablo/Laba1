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
	
	~transport()
    {
    }

protected:
	
 string m_mark;
 string m_model;
   
};
 
