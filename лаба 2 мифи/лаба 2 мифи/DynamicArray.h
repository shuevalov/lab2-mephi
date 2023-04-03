#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include<iostream>
#include<cmath>

template<class T>
class DynamicArray
{
private:
	T* arr;
	int size;

public:
	DynamicArray(T* items, int count)
	{
		for (int i = 0; i <= count; i++)
		{
			arr[i] = *items;
			items++;
		}
	}

	DynamicArray(int size)
	{
		this->size = size;
		arr = new T[size];
	}

	T Get(int index)
	{
		if (index >= this->size || !arr[index])
			return 0;
		else
			return arr[index];
	}

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

	int GetSize()
	{
		return size;
	}

	void Set(int index, T value)
	{
		arr[index] = value;
	}

	void Resize(int newSize)
	{
		T* temp = new T[newSize];
		for (int i = 0; i < newSize; i++)
			temp[i] = arr[i];
		delete[] arr;
		arr = temp;
	}

	DynamicArray<T>* GetSubList(int startIndex, int endIndex)
	{
		DynamicArray<T>* subl = new DynamicArray<T>;
		subl.size = endIndex - startIndex;
		subl.arr = new T[subl.size];
		for (int i = startIndex; i <= endIndex; i++)
			subl.arr[i] = this->arr[i];
		return subl;
	}
};
#endif
