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

	// �������� ������� � ����
	void Push(int priority, T value);

	// ����� ������� �� ����� � ������������ �����������
	T Pop();

	// ���������, ������ �� ����
	bool IsEmpty();

	// ������� ����
	void Clear();

};