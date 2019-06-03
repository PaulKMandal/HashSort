#include "LinkedList.h"

#define TBLSize 10 //TBLSize is the size of our Radix. Since for this exampe we are sorting decimal integers, it is 10.

class Hash
{
public:
	
	LinkedList * hash[TBLSize];

	Hash()
	{

		for (int x = 0; x < TBLSize; x++) // Yes, I am doing it like this because I forgot how to do it the other way
		{
			hash[x] = new LinkedList(); // initializes our Linked Lists
		}
	}

	int hashFunction(int key) //Our key is different from our value and is handled externally (by ptrSort)
	{
		return key%TBLSize;
	}

	void Add(int val, int key)
	{
		int hashVal = hashFunction(key);
		hash[hashVal]->Add(val);
	}

	int getLowest()
	{
		for (int i = 0; i < TBLSize ; i++)
		{
			if (hash[i]->Head != nullptr)
			{
				return hash[i]->deQueue()->value;
			}
		}

		return 0;
	}

	void printHash()  //This is just something that I use for debugging
	{
		for (int i = 0; i < TBLSize; i++)
		{
			hash[i]->Print();
		}
	}

};