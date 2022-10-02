#pragma once
#include <iostream>
#include <deque> 
#include <algorithm>
#include <random>
#include <iterator>

namespace LabContSTL {
	using namespace System;
	using namespace std;

	class GenAlgorithms
	{
	public:
		template<typename T>
		int funCount(deque<T>& items, String^ a);

		template<typename T>
		void funForeach(deque<T>& items);

		template<typename T>
		bool funFind(deque<T>& items, String^ a);

		template<typename T>
		void funCopy(deque<T>& items, deque<T>& val);

		template<typename T>
		void funFill(deque<T>& items, String^ a);

		template<typename T>
		void funRemove(deque<T>& items, String^ a);

		template<typename T>
		void funReplace(deque<T>& items, String^ a, String^ c);

		template<typename T>
		void funReverse(deque<T>& items);

		template<typename T>
		void funUnique(deque<T>& items);

		template<typename T>
		void funSort(deque<T>& items);
	};

	template<typename T>
	int GenAlgorithms::funCount(deque<T>& items, String^ a)
	{
		int res = 0;
		double targ = Convert::ToDouble(a);

		res = count(items.begin(), items.end(), targ);

		return res;
	}

	template<typename T>
	void GenAlgorithms::funForeach(deque<T>& items)
	{
		for_each(items.begin(), items.end(), [](double& n) {n++; });
	}

	template<typename T>
	bool GenAlgorithms::funFind(deque<T>& items, String^ a)
	{
		double n = Convert::ToDouble(a);
		auto res = find(items.begin(), items.end(), n);;

		if (res != items.end())return true;
		else return false;
	}

	template<typename T>
	void GenAlgorithms::funCopy(deque<T>& items, deque<T>& val)
	{
		copy(val.begin(), val.end(), items.begin());
	}

	template<typename T>
	void GenAlgorithms::funFill(deque<T>& items, String^ a)
	{
		double n = Convert::ToDouble(a);

		fill(items.begin(), items.end(), n);
	}

	template<typename T>
	void GenAlgorithms::funRemove(deque<T>& items, String^ a)
	{
		double n = Convert::ToDouble(a);

		items.erase(std::remove(items.begin(), items.end(), n), items.end());
	}

	template<typename T>
	void GenAlgorithms::funReplace(deque<T>& items, String^ a, String^ b)
	{
		double n = Convert::ToDouble(a);
		double v = Convert::ToDouble(b);

		replace(items.begin(), items.end(), v, n);

	}

	template<typename T>
	void GenAlgorithms::funReverse(deque<T>& items)
	{
		reverse(std::begin(items), std::end(items));
	}

	template<typename T>
	void GenAlgorithms::funUnique(deque<T>& items)
	{
		sort(items.begin(), items.end());
		auto last = unique(items.begin(), items.end());
		items.erase(last, items.end());
	}

	template<typename T>
	void GenAlgorithms::funSort(deque<T>& items)
	{
		sort(items.begin(), items.end());
	}
}