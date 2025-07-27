#include<iostream>
using namespace std;        //A[] = 5 8 9 7 4
int main()
{
    int n=5;
    int A[]={5, 8, 9, 7, 4}; // Array of integers
    int k=3;
    int item=100;
    int j=n;
    while(j>=k)
    {
        A[j+1]=A[j];
        j--;
    }
    A[k]=item;

    n=n+1;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}