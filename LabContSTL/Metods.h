#pragma once
#include <iostream>
#include <deque> 

namespace LabContSTL {
	using namespace System;
	using namespace std;

	class Metod
	{
	public:
		deque<double> numbers;
		deque<double> values;

		template<typename T>
		void addItem(deque<T>& items, String^ a, String^ b, int c);

		template<typename T>
		static void removingItem(deque<T>& items, String^ b, int c);

		template<typename T>
		void changingAnItem(deque<T>& items, deque<T>& temp, String^ a, String^ b, int c);

		template<typename T>
		double retrievingItem(deque<T>& items, String^ b, int c);

		template<typename T>
		double queueSize(deque<T>& items, String^ a, int c);

	};

	template<typename T>
	void Metod::addItem(deque<T>& items, String^ a, String^ b, int c)
	{
		int sel = c;
		int pos = Convert::ToInt32(b);
		double dat = Convert::ToDouble(a);
		auto it = pos + items.cbegin();

		switch (sel)
		{
		case 0:
			items.push_back(Convert::ToDouble(a));
			break;
		case 1:
			items.push_front(Convert::ToDouble(a));
			break;
		case 2:
			items.insert(it, dat);
			break;
		default:
			MessageBox::Show("Выберите действие!");
			break;
		}
	}

	template<typename T>
	void Metod::removingItem(deque<T>& items, String^ b, int c)
	{
		int sel = c;
		int pos = Convert::ToInt32(b);
		auto it = pos + items.cbegin();

		switch (sel)
		{
		case 0:
			items.clear();
			break;
		case 1:
			items.pop_back();
			break;
		case 2:
			items.pop_front();
			break;
		case 3:
			items.erase(it);
			break;
		default:
			MessageBox::Show("Выберите действие!");
			break;
		}
	}

	template<typename T>
	void Metod::changingAnItem(deque<T>& items, deque<T>& temp, String^ a, String^ b, int c)
	{
		int sel = c;
		int col = Convert::ToInt32(b);
		double dat = Convert::ToDouble(a);
		auto start = temp.begin();
		auto end = temp.end();

		switch (sel)
		{
		case 0:
			items.assign(col, dat);
			break;
		case 1:
			items.assign(start, end);
			break;
		default:
			MessageBox::Show("Выберите действие!");
			break;
		}

	}

	template<typename T>
	double Metod::retrievingItem(deque<T>& items, String^ b, int c)
	{
		int sel = c;
		int pos = Convert::ToInt32(b);
		double d = 0;

		switch (sel)
		{
		case 0:
			d = items[pos];
			break;
		case 1:
			d = items.at(pos);
			break;
		case 2:
			d = items.front();
			break;
		case 3:
			d = items.back();
			break;
		default:
			MessageBox::Show("Выберите действие!");
			break;
		}

		return d;
	}

	template<typename T>
	double Metod::queueSize(deque<T>& items, String^ a, int c)
	{
		int sel = c;
		double d = 0;
		double dat = Convert::ToDouble(a);

		switch (sel)
		{
		case 0:
			d = items.size();
			break;
		case 1:
			items.resize(dat);
			d = items.size();
			break;
		default:
			MessageBox::Show("Выберите действие!");
			break;
		}
		
		return d;
	}
}