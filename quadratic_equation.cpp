#include<bits/stdc++.h>
// using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    double a,b,c;
    std::cin>>a>>b>>c;
    double d=b*b-4*a*c;
    if(d>0)
    {
        double x1=(-b+sqrt(d))/(2*a);
        double x2=(-b-sqrt(d))/(2*a);
        std::cout<<x1<<" "<<x2<<endl;
        std::cout<<"Duita man asbe"<<endl;
    }
    else if(d==0)
    {
        double x=(-b)/(2*a);
        std::cout<<x<<endl;
        std::cout<<"Ekta man asbe"<<endl;
    }
    else
    {
        std::cout<<"kono man asbe na"<<endl;
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    solve();
    return 0;
}