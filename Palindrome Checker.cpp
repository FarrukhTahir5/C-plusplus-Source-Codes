#include <iostream>
using namespace std;
const int MAX=20;
class Stack{
public:
    int top=-1;
    char array[MAX];
    void push(char c);
    char pop();
    void display();
    bool valid=true;
};
void Stack::push(char c) {
    if(top<MAX) {
        top++;
        array[top] = c;
    }
    else
        cout<<"Stack Full";
}
char Stack::pop() {
    if(top>-1){
    return(array[top--]);
    }
    else
        return 0;

}
void Stack::display() {
    if(valid&&top==-1)
        cout<<"Valid Expression";
    else
        cout<<"Invalid Expression";
}
void palindrome(string str){
    Stack s;
    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }
    string st;
    for(int i=0;i<str.length();i++){
        st+=s.pop();
    }
    if(str==st)
        cout<<"PALINDROME!";
    else
        cout<<"Not Palindrome";
}

int main() {
    string str;
    cout<<"enter String:";
    cin>>str;
    palindrome(str);


    return 0;
}
