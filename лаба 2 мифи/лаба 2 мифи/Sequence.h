#ifndef SEQUENCE_H 
#define SEQUENCE_H 

template <class T>
class Sequence
{

public:

	virtual void Append(T item) = 0;

	virtual int GetLength() = 0;

	virtual T GetFirst(int index) = 0;

	virtual T GetLast() = 0;

	virtual T Get(int index) = 0;

	virtual Sequence<T>* GetSubList(int startIndex, int endIndex) = 0;

};

#endif
