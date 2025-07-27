#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char A[]={'H','E','L','L','O','W'};
    int k=3;
    int n=6;
    for(int j=k;k<n-1;j++)
    {
        A[j]=A[j+1];
    }
    n=n-1;
    for(auto val:A)
    {
        cout<<val<<" ";
    }
    // Adjust size after deletion
    // for(int j=0;j<n;j++)
    // {
    //     cout<<A[j]<<" ";
    // }
    return 0;
}