#include<iostream>
using namespace std;
int main()
{
    long long x,i,j,n,fact=1;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        for(j=1; j<=x; j++)
        {
            fact=fact*j;
        }
        cout<<fact<<endl;
        fact=1;
    }
    return 0;
}
