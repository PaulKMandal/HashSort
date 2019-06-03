// Radix Pointer Sort.cpp : Defines the entry point for the console application.
//

#include "ptrRadix.h"
#include <stdio.h>
#include <sys/time.h>
#include <fstream>



int main()
{
        struct timeval t1, t2;
        double elapsedTime;
        int size, dim;
        size = 1000;
        dim = 9;
        
	//int arr [] = { 314, 563, 789, 543, 123, 124, 878, 877 };
        int arr[size];
        ifstream myReadFile;
            myReadFile.open("./data2/9");
            if (myReadFile.fail())
                cout << "Could Not Open File\n";
            else
                cout << "File opened succesfully\n";
            
            char output[100];
            int i = 0;
            if (myReadFile.is_open()) {
                while (!myReadFile.eof()) {
                    myReadFile >> output;
                    arr[i] = atoi(output);
                    i++;
                    
                }
            }
      
        gettimeofday(&t1, NULL);
	ptrSort(arr, size, dim);
        gettimeofday(&t2, NULL);
        
	/*for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		cout << arr[i] << "\n";
	}*/
        
        elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;      // sec to ms
        elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;   // us to ms
        cout <<"Time: " << elapsedTime << " ms.\n";

        return 0;
}
