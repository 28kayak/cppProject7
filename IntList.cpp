//IntList

IntList::IntList()
{
	data = new int [50];
	howmany = 0;
	capacity = 50;
} 



IntList::IntList(int size)
{
	data = new int [50];
	howmany = 0;
	capacity = size;
}
/**
 * [IntList::insert Insert a value ]
 * @param value [to be inserted]
 */
void IntList::insert(int value)
{
	if(howmany == capacity)
	{
		int* temp = new int[capacity * 2];
		for(int i = 0; i <= howmany; i++)
		{
			temp[i] = data[i];
		}
		capacity = capacity * 2;
		delete [] data;
		data = temp;
	}
	data[howmany++] = value;
}
/**
 * [IntList::deleteItem Delete one item]
 * @param value [to be deleted]
 * @preconditon: at least one occurence are there.
 */
void IntList::deleteItem(int value)
{
	int index = 0;
	while(data[index] != value)
	{
		index++;
	}
	data[index] = data[howmany - 1];
	howmany--;
}
void IntList::deleteAll(int value)
{

}
/**
 * [IntList::isThere Determines if 'value' is in the list]
 * @param  value [to be looked for]
 * @return       [if finding, return true]
 */
bool IntList::isThere(int value)const
{
	int index = 0;
	while(index < howmany && data[index] != value)
	{
		index++;
	}
	return (index != howmany);
}
/**
 * copy construtor
 */
IntList& IntList::IntList(const IntList& obj)
{
	howmany = obj.howmany;
	capacity = obj.capacity;
	data = new int[capacity];

	for(int i = 0; i < howmany; i++)
	{
		data[i] = obj.data[i];
	}
}
operator& operator<<(ostream& out, const IntList& list)
{
	for(i = 0; i < list.howmany; i++)
	{
		out << list.data[i] << " ";
	}
	return out;
}