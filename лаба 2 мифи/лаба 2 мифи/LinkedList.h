#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>
#include<cmath>

template<class T>
class LinkedList
{
private:
	T* arr;
	int size;

public:
	LinkedList(T* items, int count)
	{
		for (int i = 0; i <= count; i++)
		{
			arr[i] = *items;
			items++;
		}
	}

	LinkedList() {}

	//LinkedList(LinkedList<T>& list const);

	T GetFirst(int index)
	{
		if (index >= this->size || !arr[index])
			return 0;
		else
			return arr[0];
	}

	T GetLast()
	{
		if (!arr)
			return 0;
		else
			return arr[size];
	}

	T Get(int index)
	{
		if (!arr)
			return 0;
		else
			return arr[index];
	}

	LinkedList<T>* GetSubList(int startIndex, int endIndex)
	{
		LinkedList<T>* subl = new LinkedList<T>;
		subl.size = endIndex - startIndex;
		subl.arr = new T[subl.size];
		for (int i = startIndex; i <= endIndex; i++)
			subl.arr[i] = this->arr[i];
		return subl;
	}

	int GetLength()
	{
		return size;
	}

	void Append(T item)
	{
		T* temp = new T[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = arr[i];
			if (i == size)
				temp[i + 1] = item;
		}
		delete[] arr;
		arr = temp;
	}

	void Pretend(T item)
	{
		T* temp = new T[size + 1];
		temp[0] = item;
		for (int i = 1; i <= size; i++)
			temp[i] = arr[i];
		delete[] arr;
		arr = temp;
	}

	void InsertAt(T item, int index)
	{
		T* temp = new T[size + 1];
		for (int i = 0; i <= size; i++)
		{
			temp[i] = arr[i];
			if (i == index)
			{
				temp[i] = item;
				*(arr[0])++;
			}
		}
	}

	LinkedList<T>* Concat(LinkedList<T>* list)
	{
		LinkedList<T>* temp = new LinkedList<T>;
		temp->size = this->size + list->size;
		for (int i = 0; i <= this->size; i++)
			temp->arr[i] = this->arr[i];
		for (int i = this->size; i <= list->size; i++)
			temp->arr[i] = list->arr[i];
		return temp;
	}
};
#endif
