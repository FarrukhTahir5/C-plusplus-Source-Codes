#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int s,h,m;
    double cal;
    cout<<"Enter Seconds=";
    cin>>s;
    cal=s/3600.0;
    h=cal;
    cal=(cal-h)*60.0;
    m=cal;
    cal=round((cal-m)*60.0);
    s=cal;
    cout<<"Hours="<<h;
    cout<<endl<<"Minutes="<<m;
    cout<<endl<<"Seconds="<<s;
}
