#include<iostream>
using namespace std;
int main()
{
    int n,i,mod;
    cout<<"Enter A number:";
    cin>>n;
        if(n==1)
            n=4;
        for(i=n-1;i>=1;i--)
        {
            mod=n%i;
            if(mod==0&&i!=1)
            {
                cout<<"Consonant";
                break;
            }
            else if(i==1)
            {
                cout<<"Prime number";
                break;
            }
        }

}
