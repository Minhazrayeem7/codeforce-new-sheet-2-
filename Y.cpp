#include<iostream>
using namespace std;
int main()
{
    int n,i=0,j,first,second,fibo;
    cin>>n;
    first=0;
    second=1;
    while(i<n)
    {

        if(i<=1)
        {
            fibo=i;
        }
        else
        {
            fibo=first+second;
            first =second;
            second=fibo;
        }
        i++;
        cout<<fibo<<" ";
    }

return 0;
}

