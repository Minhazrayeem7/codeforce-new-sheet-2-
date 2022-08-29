#include<iostream>
using namespace std;
int main()
{
    long long password;
    while(true)
    {
        cin>>password;
        if(password==1999)
        {
            cout<<"Correct"<<endl;
            break;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }

    }

    return 0;
}
