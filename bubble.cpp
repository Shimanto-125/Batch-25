#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int interchange=0,comparison=0,pass=0;
    for(int k=0;k<n-1;k++)
    {
        int ptr=0;
        pass++;
        
        while(ptr<n-k-1)
        {
            comparison++;
            if(a[ptr]>a[ptr+1])
            {
                int temp=a[ptr];
                a[ptr]=a[ptr+1];
                a[ptr+1]=temp;
                interchange++;
                // swap(a[ptr], a[ptr + 1]);
            }
            ptr++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Interchange: "<<interchange<<endl;
    cout<<"Comparison: "<<comparison<<endl;
    cout<<"Pass: "<<pass<<endl;

    return 0;
}