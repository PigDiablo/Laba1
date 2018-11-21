#ifndef ARRAYCAR_H
#define ARRAYCAR_H

#include <cassert> // ��� assert()
#include "Base.h"

class Keeper
{
private:

	int m_length;
	Base *m_data;

public:
	Keeper() : m_length(0), m_data(nullptr)
	{
	}

	Keeper(int length) : m_length(length)
	{
		assert(length >= 0);
		if (length > 0)
			m_data = new Base[length];
		else
			m_data = nullptr;
	}

	~Keeper()
	{
		delete[] m_data;
	}

	void erase()
	{
		delete[] m_data;
		// ����� ����� ������� m_data �������� nullptr, ����� �� ������ �� ���� �������� ���������
		m_data = nullptr;
		m_length = 0;
	}

	Base& operator[](int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	// ������� reallocate �������� ������ �������. ��� ������������ �������� ������ ������� ����� ����������. ������� �������
	void reallocate(int newLength)
	{
		// ������� ��� ������������ �������� ������ �������
		erase();

		// ���� ��� ������ ������ ���� ������, �� ��������� ������� �����
		if (newLength <= 0)
			return;

		// ����� �������� ����� ��������
		m_data = new Base[newLength];
		m_length = newLength;
	}

	// ������� resize �������� ������ �������. ��� ������������ �������� �����������. ������� ���������
	void resize(int newLength)
	{
		// ���� ������ ������ ����� - return
		if (newLength == m_length)
			return;

		// ���� ����� ������� ������ ������ - ������ ��� � ����� return
		if (newLength <= 0)
		{
			erase();
			return;
		}

		// ������ �� ����� ������������, ��� newLength �������, �� ������� ����, �� ������ ��������. ����������� ��������� ��������:
		// 1. �������� ����� ������.
		// 2. �������� �������� �� ������������� ������� � ��� ������ ��� ���������� ������.
		// 3. ���������� ������ ������ � ��������� m_data ��������� �� ����� ������.

		// �������� ����� ������
		Base *data = new Base[newLength];

		// ����� ��� ����� ����������� � ����������� ���������� ��������� � ����� ������
		// �� ����� ����������� ������� ���������, ������� �� ���� � ������� �� ��������
		if (m_length > 0)
		{
			int elementsToCopy = (newLength > m_length) ? m_length : newLength;

			// ���������� �������� ��������
			for (int index = 0; index < elementsToCopy; ++index)
				data[index] = m_data[index];
		}

		// ������� ������ ������, ��� ��� �� ��� ��� �� �����
		delete[] m_data;

		// � ���������� ������ ������� ������� �����! �������� ��������, m_data ���������
		// �� ��� �� �����, �� ������� ��������� ��� ����� ����������� ���������� ������. ���������
		// ������ ���� ����������� ����������, ��� �� ����� ����������, ����� ������ �� ������� ���������
		m_data = data;
		m_length = newLength;
	}

	void insertBefore(Base value, int index)
	{
		// �������� ������������ ������������� �������
		assert(index >= 0 && index <= m_length);

		// ������� ����� ������ �� ���� ������� ������ ������� �������
		Base *data = new Base[m_length + 1];

		// �������� ��� �������� �� �� index-�
		for (int before = 0; before < index; ++before)
			data[before] = m_data[before];

		// ��������� ��� ����� ������� � ��� ����� ������
		data[index] = value;

		// �������� ��� �������� ����� ������������ ��������
		for (int after = index; after < m_length; ++after)
			data[after + 1] = m_data[after];

		// ������� ������ ������ � ���������� ������ ���� ����� ������
		delete[] m_data;
		m_data = data;
		++m_length;
	}

	void remove(int index)
	{
		// �������� �� ������������ ������������� �������
		assert(index >= 0 && index < m_length);

		// ���� ��� ��������� ������� �������, �� ������ ������ ������ � return
		if (m_length == 1)
		{
			erase();
			return;
		}

		// C������ ����� ������ �� ���� ������� ������ ������� �������
		Base *data = new Base[m_length - 1];

		// �������� ��� �������� �� �� index-�
		for (int before = 0; before < index; ++before)
			data[before] = m_data[before];

		// �������� ��� �������� ����� ���������� ��������
		for (int after = index + 1; after < m_length; ++after)
			data[after - 1] = m_data[after];

		// ������� ������ ������ � ���������� ������ ���� ����� ������
		delete[] m_data;
		m_data = data;
		--m_length;
	}

	// ��������� �������������� ������� ������ ��� ��������
	void insertAtBeginning(Base value) 
	{ 
		insertBefore(value, 0); 
	}

	void insertAtEnd(Base value)
	{ 
		insertBefore(value, m_length);
	}

	int getLength() 
	{ 
		return m_length;
	}
};

#endif

