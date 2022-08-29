#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,n,i=1,even=0,odd=0,pos=0,neg=0;
    cin>>n;
    while(i<=n)
    {
        cin>>a;
        if(a%2==0)
        {
            even=even+1;
        }
        if(a%2!=0)
        {
            odd=odd+1;
        }
        if(a>0)
        {
            pos=pos+1;
        }
        if(a<0)
        {
            neg=neg+1;
        }
        i++;
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
       return 0;

}
