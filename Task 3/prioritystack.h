#pragma once
#include <map>
#include <list>
#include <iostream>
#include "../Task 1/unlimitednum.h"
using namespace std;
/*
The task is to implement a stack with priorities.
The LIFO order must be observed for elements with the same priority.
*/


template <class T> class PriorityStack
{
private:
	map <int, list <T>> mp;
public:
	PriorityStack();

	~PriorityStack();

	// добавить элемент в стэк
	void Push(int priority, T value);

	// взять элемент из стэка с максимальным приоритетом
	T Pop();

	// проверяет, пустой ли стэк
	bool IsEmpty();

	// очищает стэк
	void Clear();

};


template <class T>
PriorityStack<T>::PriorityStack() {}

template <class T>
PriorityStack<T>::~PriorityStack<T>() {}

template <class T>
void PriorityStack<T>::Push(int priority, T value)
{
	mp[priority].push_front(value);
};


template<> UnlimitedNumber PriorityStack<UnlimitedNumber>::Pop()
{
	if (IsEmpty() == true)
	{
		cout << "Exception, stack is empty!" << endl;
		return UnlimitedNumber("");
	}
	int priority_ = mp.begin()->first;
	UnlimitedNumber value = mp[priority_].front();
	mp[priority_].pop_front();
	if (mp[priority_].empty())
	{
		mp.erase(priority_);
	}
	return value;
};
template <class T>
T PriorityStack<T>::Pop()
{
	if (IsEmpty() == true)
	{
		cout << "Exception, stack is empty!" << endl;
		return NULL;
	}
	int priority_ = mp.begin()->first;
	T value = mp[priority_].front();
	mp[priority_].pop_front();
	if (mp[priority_].empty())
	{
		mp.erase(priority_);
	}
	return value;
};



template <class T>
bool PriorityStack<T>::IsEmpty()
{
	return mp.empty();
};

template <class T>
void PriorityStack<T>::Clear()
{
	mp.clear();
};
