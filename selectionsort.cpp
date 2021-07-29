#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        int min=arr[i],minindex=i;
        for (int j = i+1; j < n; j++)
        {
            /* code */
            if (arr[j]<min)
            {
                /* code */
                min=arr[j];
                minindex=j;
            }
            
        }
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
    }
int main() {
    int arr[]={53,10,62,97,0543,421};
    selectionsort(arr,6);
    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}