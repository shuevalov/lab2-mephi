#ifndef ARRAYSEQUENCE_H 
#define ARRAYSEQUENCE_H 
#include"DynamicArray.h" 

template <class T>
class ArraySequence : public Sequence<T>
{
private:

	DynamicArray<T>* items;

public:
	ArraySequence(DynamicArray<T>* items)
	{
		this->items = items;
	}

	virtual int GetLength() override
	{
		return this->items->GetSize();
	}

	virtual void Append(T item) override
	{
		this->items->Resize(this->items->GetSize() + 1);
		this->items->Set(this->items->GetSize() - 1, item);
	}

	virtual T Get(int index) override
	{
		return this->items->Get(index);
	}

	virtual T GetFirst(int index) override
	{
		return this->items->GetFirst(index);
	}

	virtual T GetLast() override
	{
		return this->items->GetLast;
	}

	virtual ArraySequence<T>* GetSubList(int startIndex, int endIndex) override
	{
		return this->items->GetSubList(startIndex, endIndex);
	}
};
#endif
