#include<iostream>
using namespace std;
void bubbleSort(int *input, int size)
{
    //Write your code here
    for(int i=0;i<size-1;i++){
        for(int z=0;z<size-i-1;z++){
            int j=input[z];  //replace i with z
            int k=input[z+1];
            if (j>k){
            input[z]=k;
            input [z+1]=j;
        }
        }
    }
}
int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		bubbleSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}