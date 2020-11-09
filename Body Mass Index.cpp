#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float h,w,bmi;
    cout<<"Enter Height(foot):";
    cin>>h;
    cout<<"Enter Weight(kg):";
    cin>>w;
    h=h*12;
    w=w*0.45;
    bmi=(w/(h*h))*703;
    if(bmi>18.5&&bmi<25)
    {
        cout<<"BMI:Optimal";
    }
    else if(bmi<=18.5)
    {
        cout<<"BMI:Underweight";
    }
    else if(bmi>=25)
    {
        cout<<"BMI:Overweight";
    }
    return 0;
}
