#include "Keeper.h"
#include <fstream>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

int mistake()
{
	int i;
	while (1)
	{
		std::cin >> i;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\n\t\t\t\tUnknown\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return i;
			break;
		}
	}
}


int mistake_(int a)
{
	int i = 0;
	while (1)
	{
		std::cin >> i;
		if (i == -1)
		{
			return i;
			break;
		}
		if ((std::cin.fail()) || (i<0) || (i>a))
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\n\t\t\t\tUnknown\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return i;
			break;
		}
	}
}

int f_menu()
{
	std::cout << "\n\n1> Cars \n2> Bus\n3> Bikes\n4> Go out\n\n";
	return(mistake());
}

int car_menu()
{
	std::cout << "\t1> Add new Car \n\t2> Delete car by number \n\t3> Show all Cars\n\t4> Edit\n\t5> Go out\n\n\t";
	return(mistake());
}

int bus_menu()
{
	std::cout << "\t1> Add new Bus \n\t2> Delete Bus by number \n\t3> Show all Bus\n\t4> Edit\n\t5> Go out\n\n\t";
	return(mistake());
}

int moto_menu()
{
	int i{ 0 };
	std::cout << "\t1> Add new Bike \n\t2> Delete Bike by number \n\t3> Show all Bikes\n\t4> Edit\n\t5> Go out\n\n\t";
	return(mistake());
}
void pust(int a)
{
	if (a == 0)
	{
		std::cout << "\n\t\t\tNULL\n";
	}
}












Keeper::Keeper(int size_s_, int size_t_, int size_p_)
	: size_s(size_s_),
	size_t(size_t_),
	size_p(size_p_)
{
	car** Car = new car*;
	bus** Bus = new bus*;
	moto** Moto = new moto*;
}

void Keeper::load()
{
	std::ifstream in("C:\\Users\BARMALEY\\Documents\\Visual Studio 2015\\Projects\\\Labka1\\Labka1\\Labk1.txt");
	in >> size_s;
	in >> size_t;
	in >> size_p;
	Car = (car**) realloc(Car, (size_s) * sizeof(car));
	Bus = (bus**) realloc(Bus, (1) * sizeof(bus));
	Moto = (moto**) realloc(Moto, (1) * sizeof(moto));
	for (int i{ 0 }; i < size_s; i++)
	{
		Car[i] = new car;
		std::getline(in, schet);
		Car[i]->setmarkk(schet);
		in >> ichet;
		Car[i]->setmodell(schet);
		std::getline(in, schet);
		Car[i]->setEngineVolumee(schet);
		in >> ichet;
		Car[i]->setColorr (schet);
		Car[1]->setGearTypee(schet);
	}
	for (int i{ 0 }; i < size_t; i++)
	{
		Bus[i] = new bus;
		std::getline(in, schet);
		Bus[i]->setmarkk(schet);
		std::getline(in, schet);
		Bus[i]->setmodell(schet);
		std::getline(in, schet);
		Bus[i]->setSeatss(schet);
		std::getline(in, schet);
		Bus[i]->setAllSeatss(schet);
		std::getline(in, schet);
		Bus[i]->setDestinationn(schet);
	}
	for (int i{ 0 }; i < size_p; i++)
	{
		Moto[i] = new moto;
		std::getline(in, schet);
		Moto[i]->setmarkk(schet);
		std::getline(in, schet);
		Moto[i]->setmodell(schet);
		std::getline(in, schet);
		Moto[i]->setEngineVolumee(schet);
		std::getline(in, schet);
		Moto[i]->setEnginePowerr(schet);
		std::getline(in, schet);
		Moto[i]->setTerrainn(schet);


	}
	in.close();
}

void Keeper::save()
{
	std::ofstream out("C:\\Users\BARMALEY\\Documents\\Visual Studio 2015\\Projects\\\Labka1\\Labka1\\Labk1.txt");
	out << size_s << "\n";
	out << size_t << "\n";
	out << size_p << "\n";
	for (int i{ 0 }; i < size_s; i++)
	{
		out << Car[i]->getmark() << "\n";
		out << Car[i]->getmodel() << "\n";
		out << Car[i]->getEngineVolume() << "\n";
		out << Car[i]->getColor() << "\n";
		out << Car[i]->getGearType() << "\n";
	}
	for (int i{ 0 }; i < size_t; i++)
	{
		out << Bus[i]->getmark() << "\n";
		out << Bus[i]->getmodel() << "\n";
		out << Bus[i]->getSeats() << "\n";
		out << Bus[i]->getAllSeats() << "\n";
		out << Bus[i]->getDestination() << "\n";
	}
	for (int i{ 0 }; i < size_p; i++)
	{
		out << Moto[i]->getmark() << "\n";
		out << Moto[i]->getmodel() << "\n";
		out << Moto[i]->getEngineVolume() << "\n";
		out << Moto[i]->getEnginePower() << "\n";
		out << Moto[i]->getTerrain() << "\n";
	}
	out.close();
}

void Keeper::prog()
{
	int i_switch, s_switch, t_switch, p_switch;
	std::cout << "Garazh\n";
	while (1)
	{
		i_switch = f_menu();
		switch (i_switch)
		{
		case 1:
			while (1)
			{
				s_switch = car_menu();
				switch (s_switch)
				{
				case 1:
					if (size_s == 0)
					{
						Car = (car**) realloc(Car, (1) * sizeof(car));
					}
					else
					{
						Car = (car**)realloc(Car, (size_s) * sizeof(car));
					}
					Car[size_s] = new car;
					Car[size_s]->entercar();
					size_s++;
					break;

				case 2:
					std::cout << "\tEnter number of Car(go out enter(-1):     \n";
					size_s1 = mistake_(size_s - 1);
					size_s2 = (size_s - size_s1) - 1;
					for (int i{ 0 }; i < size_s2; i++)
					{
						u = size_s1 + 1;
						Car[size_s1] = new car(*Car[u]);
						size_s1++;
					}
					Car = (car**)realloc(Car, (size_s - 1) * sizeof(car));
					size_s--;
					break;
				case 3:
					pust(size_s);
					for (int i{ 0 }; i < size_s; i++)
					{
						std::cout << "Number of car\t" << i;
						Car[i]->outcar();
					}
					break;
				case 4:
					std::cout << "\tEnter number of car(go out enter(-1):     \n";
					ed1 = mistake_(size_s - 1);
					if (ed1 == -1) break;
					std::cout << "\n\tSelect number of edit\n\t1.Model\n\t2.Mark\n\t3.EnginePower\n\t4.Color\n\t5.GearType\n\t";
					ed = mistake_(5);
					if (ed == -1) break;
					switch (ed)
					{
					case 1:Car[ed1]->setmodel();
						break;
					case 2:Car[ed1]->setmark();
						break;
					case 3:Car[ed1]->setEngineVolume();
						break;
					case 4:Car[ed1]->setColor();
						break;
					case 5:Car[ed1]->setGearType();
						break;
					}
					break;
				case 5: flag = true; break;
				default: std::cout << "\n\t\t\t\tUnknown\n";
				}
				if (flag)
				{
					flag = false;
					break;
				}
			}
			break;
		case 2:
			while (1)
			{
				p_switch = bus_menu();
				switch (p_switch)
				{
				case 1:
					if (size_t == 0)
					{
						Bus = (bus**)realloc(Bus, (1) * sizeof(bus));
					}
					else
					{
						Bus = (bus**)realloc(Bus, (size_t) * sizeof(bus));
					}
					Bus[size_t] = new bus;
					Bus[size_t]->enterbus();
					size_t++;
					break;

				case 2:
					std::cout << "\tEnter number of bus(go out enter(-1):     \n";
					size_t1 = mistake_(size_t - 1);
					size_t2 = (size_t - size_t1) - 1;
					for (int i{ 0 }; i < size_t2; i++)
					{
						u = size_t1 + 1;
						Bus[size_t1] = new bus(*Bus[u]);
						size_t1++;
					}
					Bus = (bus**)realloc(Bus, (size_t - 1) * sizeof(bus));
					size_t--;
					break;

				case 3:
					pust(size_t);
					for (int i{ 0 }; i < size_t; i++)
					{
						std::cout << "Number of bus\t" << i;
						Bus[i]->outbus();
					}
					break;
				case 4:
					std::cout << "\tEnter number of bus(go out enter(-1):     \n";
					ed1 = mistake_(size_t - 1);
					if (ed1 == -1) break;
					std::cout << "\n\tSelect number of edit\n\t1.Model\n\t2.Mark\n\t3.Seats\n\t4.AllSeats\n\t5.Destination\n\t";
					ed = mistake_(3);
					if (ed == -1) break;
					switch (ed)
					{
					case 1:Bus[ed1]->setmodel();
						break;
					case 2:Bus[ed1]->setmark();
						break;
					case 3:Bus[ed1]->setSeats();
						break;
					case 4:Bus[ed1]->setAllSeats();
						break;
					case 5:Bus[ed1]->setDestination();
						break;
					}
					break;

				case 5: flag = true; break;
				default: std::cout << "\n\t\t\t\tUnknown\n";
				}
				if (flag)
				{
					flag = false;
					break;
				}
			}
			break;
		case 3:
			while (1)
			{
				t_switch = moto_menu();
				switch (t_switch)
				{
				case 1:
					if (size_p == 0)
					{
						Moto = (moto**)realloc(Moto, (1) * sizeof(moto));
					}
					else
					{
						Moto = (moto**)realloc(Moto, (size_p) * sizeof(moto));
					}
					Moto[size_p] = new moto;
					Moto[size_p]->entermoto();
					size_p++;
					break;
				case 2:
					std::cout << "\tEnter number of Bikes(go out enter(-1):     \n";
					size_p1 = mistake_(size_p - 1);
					size_p2 = (size_p - size_p1) - 1;
					for (int i{ 0 }; i < size_p2; i++)
					{
						u = size_p1 + 1;
						Moto[size_p1] = new moto(*Moto[u]);
						size_p1++;
					}
					Moto = (moto**)realloc(Moto, (size_p - 1) * sizeof(moto));
					size_p--;
					break;

				case 3:
					pust(size_p);
					for (int i{ 0 }; i < size_p; i++)
					{
						std::cout << "Number of Bikes\t" << i;
						Moto[i]->outmoto();
					}
					break;
				case 4:
					std::cout << "\tEnter number of Bikes(go out enter(-1):     \n";
					ed1 = mistake_(size_p - 1);
					if (ed1 == -1) break;
					std::cout << "\n\tSelect number of edit\n\t1.Model\n\t2.Mark\n\t3.EnginePower\n\t4.EngineVolume\n\t5.Terrain\n\t";
					ed = mistake_(4);
					if (ed == -1) break;
					switch (ed)
					{
					case 1:Moto[ed1]->setmodel();
						break;
					case 2:Moto[ed1]->setmark();
						break;
					case 3:Moto[ed1]->setEngineVolume();
						break;
					case 4:Moto[ed1]->setEnginePower();
						break;
					case 5:Moto[ed1]->setTerrain();
						break;
					}
					break;
				case 5: flag = true; break;
				default: std::cout << "\n\t\t\t\tUnknown\n";
				}
				if (flag)
				{
					flag = false;
					break;
				}
			}
			break;
		case 4: flag = true; break;
		default: std::cout << "\n\t\t\t\tUnknown\n";
		}
		if (flag)
		{
			flag = false;
			break;
		}
	}

}


Keeper::~Keeper()
{
}