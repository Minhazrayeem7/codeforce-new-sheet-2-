#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,x,i=0,maximum;
    cin>>a;
    maximum=0;

    for(i=0; i<a; i++)
    {
        cin>>x;

        if(x>maximum)
            maximum=x;
    }
    cout<<maximum;


    return 0;
}
