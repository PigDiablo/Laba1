#pragma once
#include "car.h"
#include "bus.h"
#include "moto.h"

class Base : car 
{
public:

	Base(string mark, string model, int EngineVolume, string Color, string GearType) :
		car(mark, model, EngineVolume, Color, GearType)
	{

	}

	~Base()
	{

	}

	Base()
	{
		m_EngineVolume = 0;
		m_Color = "";
		m_GearType = "";
		m_mark = "";
		m_model = "";
	}


	// Перегрузка оператора присваивания
	Base& operator= (const Base &Base)
	{
		// выполняем копирование значений
		m_EngineVolume = Base.m_EngineVolume;
		m_Color = Base.m_Color;
		m_GearType = Base.m_GearType;
		m_mark = Base.m_mark;
		m_model = Base.m_model;

		// возвращаем текущий объект, чтобы мы могли связать в цепочку выполнение нескольких операций присваивания
		return *this;
	}

private:

	int m_EngineVolume;
	string m_Color;
	string m_GearType;
	string m_mark;
	string m_model;
	void print();
};

