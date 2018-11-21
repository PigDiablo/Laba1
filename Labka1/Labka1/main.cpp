
#include <iostream>
#include "car.h"
#include "Base.h"

#include "Keeper.h"

using namespace std;
 
int main()
{
	setlocale (LC_ALL,"rus"); // установить используемую системой локаль
  

	Base vehicle1;

	Keeper garage(10);

	garage[0] = vehicle1;
	garage[0].print;

    system("pause");
    return 0;
}

