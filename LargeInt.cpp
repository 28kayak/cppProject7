#include "LargeInt.h"

LargeInt::Largeint()
{
	largeVal = -1;
}
int LargeInt::getLargeVal()
{
	return largeVal;

}
LargeInt::LargeInt(const Largeint& alist):IntList(alist)
{
	largeVal = alist.largeVal;
}
LargeInt& LargeInt::operator=(const LargeInt& alist)
{
	IntList::operator=(alist);
	largeVal = alist.largeVal;
	return *this;
}
void LargeInt::insert(int value)
{
	if(howmany == capacity)
	{
		int* temp = new int[capacity * 2];
		for(int i = 0; i < = howmany; i++)
		{
			temp[i] = data[i];
			capacity = capacity * 2;
			delete[] data;
			data = temp;
		}	
		data[howmany++] = value;
		if(value > largeVal)
		{
			largeVal = value;
		}
	}
}