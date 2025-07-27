#include<iostream>
using namespace std;

int main()
{
    // A[]={2,5,8,4,7,10,3}
    int A[]={2,5,8,4,7,10,3};
    int n=7;
    int mx=A[0];
    int loc=0;
    // for(int i=1;i<n;i++)
    // {
    //     if(mx<A[i])
    //     {
    //         mx=A[i];
    //         loc=i;
    //     }
    // }
    int i=0;
    while(i<n)
    {
        if(mx<A[i])
        {
            mx=A[i];
            loc=i;

        }
        i++;
    }
    cout<<"Maximum="<< mx<<" loc="<<loc+1<<endl;
    return 0;
}