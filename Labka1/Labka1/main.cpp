#include <stdexcept> 
#include <iostream>
#include <string> 
#include "car.h"
#include "bus.h"
#include "moto.h"
#include "Keeper.h"

using namespace std;

int displayMenu();
void enterbus(Keeper& garage);
void enterbar(Keeper& garage);
void addmoto(Keeper& garage);
void fireVehicle(Keeper& garage);
void fireAllVehicles(Keeper& garage);
void FindbyNumber(Keeper& garage);

int main()
{
	setlocale(LC_ALL, "rus"); // установить используемую системой локаль

	car vehicle1;
	bus vehicle2;
	moto venicle3;
	Keeper garage(10);

	garage[0] = vehicle1;

	bool done = false;

	while (!done)
	{
		int selection = displayMenu();

		switch (selection)
		{
		case 1:
			addBus(garage);
			break;
		case 2:
			addCar(garage);
			break;
		case 3:
			addMoto(garage);
			break;
		case 4:
			fireVehicle(garage);
			break;
		case 5:
			fireAllVehicles(garage);
			break;
		case 6:
			garage.displayAllVehicles();
			break;
		case 0:
			done = true;
			break;
		default:
			cerr << "Unknown command." << endl;
		}
	}

}

int displayMenu()
{
	int selection;

	std::cout << endl;
	std::cout << "My garage" << endl;
	std::cout << "-----------------" << endl;
	std::cout << "1) Add bus" << endl;
	std::cout << "2) Add car" << endl;
	std::cout << "3) Add moto" << endl;
	std::cout << "4) Fire vehicle" << endl;
	std::cout << "5) Fire all vehicles" << endl;
	std::cout << "6) Dispay all vehicles" << endl;
	std::cout << "0) Quit" << endl;
	std::cout << endl;
	std::cout << "---> ";

	std::cin >> selection;

	return selection;
}

void addCar(Keeper& garage)
{
	int EngineVolume;
	string Color;
	string GearType;
	string mark;
	string model;

	std::cout << "Enter mark of car?";
	std::cin >> mark;
	std::cout << "Enter model of car?";
	std::cin >> model;
	std::cout << "Enter gear type of car";
	std::cin >> GearType;
	std::cout << "Enter color of car?";
	std::cin >> Color;
	std::cout << "Enter ngine volume of car?";
	std::cin >> EngineVolume;

	try
	{
		inDB.addEmployee(firstName, lastName);
	}
	catch (std::exception ex)
	{
		cerr << "Unable to add new employee!" << endl;
	}
}

void doFire(Database& inDB)
{
	int employeeNumber;

	cout << "Employee number? ";
	cin >> employeeNumber;

	try {
		Employee& emp = inDB.getEmployee(employeeNumber);
		emp.fire();
		cout << "Employee " << employeeNumber << " has been terminated." << endl;
	}
	catch (std::exception ex) {
		cerr << "Unable to terminate employee!" << endl;
	}
}





	using namespace std;

	int displayMenu();
	void Car(Keeper& inDB);
	void bus(Keeper& inDB);
	void moto(Keeper& inDB);

	int main(int argc, char** argv)
	{
			Keeper employeeDB;
		bool done = false;

		while (!done)
		{
			int selection = displayMenu();

			switch (selection)
			{
			case 1:
				Car(employeeDB);
				break;
			case 2:
				bus(employeeDB);
				break;
			case 3:
				moto(employeeDB);
				break;
				done = true;
				break;
			default:
				cerr << "Unknown command." << endl;
			}
		}
	}

	int displayMenu()
	{
		int selection;

		cout << endl;
		cout << "Employee Database" << endl;
		cout << "-----------------" << endl;
		cout << "1. Car" << endl;
		cout << "2. Bus" << endl;
		cout << "3. Bike" << endl;
		//cout << "1) Hire a new employee" << endl;
		//cout << "2) Fire an employee" << endl;
		//cout << "3) Promote an employee" << endl;
		//cout << "4) Demote an employee" << endl;
		//cout << "5) List all employees" << endl;
		//cout << "6) List all current employees" << endl;
		//cout << "7) List all previous employees" << endl;
		//cout << "8) Find employees by names" << endl;
		//cout << "9) Find employees by number" << endl;
		//cout << "0) Quit" << endl;
		//cout << endl;
		//cout << "---> ";

		std::cin >> selection;

		return selection;
	}
	int car_menu()
	{
		int selection;
		std::cout << "\t1> Add new Student \n\t2> Delete student by number \n\t3> Write all Students\n\t4> Go out\n\n\t";
		std::cin >> selection;
		return selection;
	}
	void Car(Keeper & inDB)
	{
	}
	void bus(Keeper & inDB)
	{
	}
	void moto(Keeper & inDB)
	{
	}
