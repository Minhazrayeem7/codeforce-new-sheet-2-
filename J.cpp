#include<iostream>
using namespace std;
int main()
{
    int n,i,j,flag;
    cin>>n;
    for(i=2; i<=n; i++)
    {
        flag=1;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                flag=2;
            }
        }
            if(flag==1)
            {
               cout<<i<<" ";
            }
    }
    return 0;
}
