/*IntList*/
#include <iostream>
using namespace std;
/**
 * 
 */
class IntList
{
	public:
		IntList(arguments);//create empty IntList with intial capacity 50
		~IntList()
		{
			delete[] data;
		}
		IntList(int size);
		IntList(const IntList& obj);
		IntList& operator =(const IntList& obj);

		void insert(int value);//insert 'value' into the list
		/**
		 * [deleteItem Delete first occurrance of 'value' from the list]
		 * @param value [value to be deleted]
		 * @precondition [at least one occurrance of value is in the list]
		 */
		void deleteItem(int value);
		/**
		 * [deleteAll Delete all occurances of value from the list]
		 * @param value [value to be deleted]
		 */
		void deleteAll(int value);
		/**
		 * [isThere Determines if 'value' is in the list]
		 * @param  value [value to be deleted]
		 * @return       [if finding, return true]
		 */
		bool isThere(int value);
		/**
		 * operator overload for output
		 */
		friend ostream& operator<<(ostream& out, const IntList& list);
	
	private:/* data */
		int *data;
		int howmany;
		int capacity;
};