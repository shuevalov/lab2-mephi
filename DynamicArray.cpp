/*#include"DynamicArray.h"

template<class T>
DynamicArray<T>::DynamicArray(T* items, int count)
{

	for (int i = 0; i <= count; i++)
	{
		arr[i] = *items;
		items++;
	}
}

template<class T>
DynamicArray<T>::DynamicArray(int size)
{
	this->size = size;
	arr = new T[size];
}

/*DynamicArray<T>::DynamicArray(DynamicArray<T>& dynamicArray const)
{

}

template<class T>
T DynamicArray<T>::Get(int index)
{
	if (index >= this->size || !arr[index])
		return 0;
	else
		return arr[index];
}

template<class T>
int DynamicArray<T>::GetSize()
{
	return this->size;
}

template<class T>
void DynamicArray<T>::Set(int index, T value)
{
	arr[index] = value;
}

template<class T>
void DynamicArray<T>::Resize(int newSize)
{
	delete[] arr;
	arr = new T[newSize];
}*/
