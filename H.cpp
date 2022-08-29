#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,coun=0;
    cin>>n;
    coun=0;
    for(i=2; i<n; i++)
    {
      if(n%i==0)
        coun++;

    }
    if(coun==0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;


}
