#ifndef LINKEDLISTSEQUENCE_H 
#define LINKEDLISTSEQUENCE_H 
#include "LinkedList.h" 

template <class T>
class LinkedListSequence : public Sequence<T>
{
private:

	LinkedList<T>* items;

public:
	LinkedListSequence(LinkedList<T>* items)
	{
		this->items = items;
	}

	virtual int GetLength() override
	{
		return this->items->GetLength();
	}

	virtual void Append(T item) override
	{
		this->items->Append(item);
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

	virtual LinkedListSequence<T>* GetSubList(int startIndex, int endIndex) override
	{
		return this->items->GetSubList(startIndex,endIndex);
	}
};
#endif
