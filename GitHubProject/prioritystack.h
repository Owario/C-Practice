#pragma once
#include <map>
#include <list>
#include <iostream>
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