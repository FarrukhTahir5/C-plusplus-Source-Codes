#include<iostream>
using namespace std;
int main()
{
    int i,fact;
    cout<<"Number:";
 cin>>i;
        fact=i;
    for(i;i>=2;i--)
    {
        fact=fact*(i-1);
    }
    cout<<"Factorial:"<<fact<<endl;
    system("pause");
    system("cls");
}
