
#include <iostream>
#include "car.h"

using namespace std;
 
int main()
{
	setlocale (LC_ALL,"rus"); // установить используемую системой локаль
    cout << "My first program!" << endl;
    
    car car1 ("Lada","Vesta", 1600, "blue", "manual");
    car1.print();
    
    system("pause");
    return 0;
}

