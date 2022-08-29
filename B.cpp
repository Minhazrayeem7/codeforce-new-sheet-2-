#include<iostream>
using namespace std;
int main()
{
    long long a,i=1;
    cin>>a;
    if(a==1)
    {
        cout<<"-1";
    }
    else
    while(i<=a)
    {
        if(i%2==0)
        {
        cout<<i<<endl;
        }
        i++;

    }
    return 0;
}
