#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter A number:";
    cin>>n;
    cout<<endl;
    for(i=0;i!=n;i++)
    {
        for(j=0;j!=n;j++)
            cout<<"*";
        cout<<endl;
    }
    system("pause");
    cout<<endl;
    for(i=0;i!=n;i++)
    {
        for(j=0;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    system("Pause");
    cout<<endl;
    for(i=0;i!=n;i++)
    {
        for(j=n;j>i;j--)
            cout<<"*";
        cout<<endl;
    }
    system("Pause");
    cout<<endl;
    for(i=0;i!=2*n;i++)
    {
        for(j=0;(j<i)&&(i<=n);j++)
            cout<<"*";
        for(j=2*n;(j>i)&&(i>n);j--)
            cout<<"*";
        cout<<endl;
    }
    system("Pause");
    cout<<endl;
    if(n%2==0)  //For a Perfect Shape
        n++;
    for(i=1;i<2*n;i+=2)
    {
        for(k=(n-i)/2;k>0;k--)
            cout<<" ";
        for(j=0;(j<i)&&(i<=n);j++)
            cout<<"*";
        for(k=i;k>n;k-=2)
            cout<<" ";
        for(j=2*n;(j>i)&&(i>n);j--)
            cout<<"*";
        cout<<endl;
    }

}
