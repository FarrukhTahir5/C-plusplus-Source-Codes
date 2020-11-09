#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<10;i++)
        {
            cout<<"Number:";
            cin>>j;
            if(j%2==0)
                cout<<"Even"<<endl;
            else
                cout<<"Odd"<<endl;
        }
    system("pause");
    system("cls");
}
