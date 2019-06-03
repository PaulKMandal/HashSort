#include "Hash.h"
#include <math.h>

#define Radix 10

static void ptrSort(int arr[], int size, int dim) //size is size of the array and dim is the number of digits in what we are sorting
{
	for (int i = 1; i <= dim; i++) //loop through each digit
	{
		Hash * h = new Hash();

		for (int j = 0; j < size; j++) // add each value to the hash
		{
			int key = arr[j]/((int)pow(Radix,(i-1))) % Radix; //the key for the given value at the given digit (let our digit at the ith place be di. Then di = value/(radix^(i-1) % radix
			h->Add(arr[j], key);
		}
                /*cout<< "digit" << i <<"\n\n";
                h->printHash();
                cout <<"\n";*/
		for (int j = 0; j < size; j++)
		{
			arr[j] = h->getLowest();
		}

	}
}