#include "transport.h"
#include "car.h"
#include "bus.h"
#include "moto.h"
#include "Keeper.h"
int main()
{
	Keeper *one = new Keeper;
	one->load();
	one->prog();
	one->save();
	system("pause");
	return 0;
}