#include"IntList.h"
class LargeInt: public IntList
{
	public:
		LargeInt();
		int getLargeVal();

		LargeInt(const LargeInt&);
		LargeInt& operator=(const LargeInt &);
		void insert(int val);

	private:
		int largeVal;

}