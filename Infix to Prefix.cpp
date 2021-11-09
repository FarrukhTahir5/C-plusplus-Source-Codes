#include <iostream>
using namespace std;
const int MAX=20;
// for testing: K+L-M*N+(O^P)*W/U/V*T+Q
//Infix to Prefix
class Stack{
public:
    char arr[MAX];
    int top=-1;
    void push(char c){
        if(top<MAX-1)
            arr[++top]=c;
        else
            cout<<"Stack Overflow";
    }
    char pop(){
        if(top>-1)
            return arr[top--];
        return 0;
    }
    char peek() {
        return arr[top];
    }
};
int precedence(char c){
    if(c=='+'||c=='-')
        return 1;
    else if(c=='/'||c=='*' )
        return 3;
    else if(c=='^')
        return 5;
    else
        return 0;
}
string prefix(string string1){
    Stack stack;
    string res;
    for(int i=string1.length()-1;i>=0;i--)
        res.push_back(string1[i]);
    string1=res;
    res="";
    for(int i=0;i<string1.length();i++){
        if((string1[i]>='a'&&string1[i]<='z')||(string1[i]>='A'&&string1[i]<='Z'))
            res.push_back(string1[i]);
        else if(string1[i]=='+'||string1[i]=='*'||string1[i]=='/'||string1[i]=='-'||string1[i]=='^'){
            if(stack.top==-1||stack.peek()==')'){
                stack.push(string1[i]);
                continue;
            }
            if(precedence(string1[i])>=precedence(stack.peek())){
                stack.push(string1[i]);
            }
            else{
                while(precedence(string1[i])<precedence(stack.peek())){
                    res.push_back(stack.pop());
                }
            }
        }
        else if(string1[i]==')')
            stack.push(string1[i]);
        else if(string1[i]=='('){
            while(stack.peek()!=')') {
                res.push_back(stack.pop());
            }
            stack.pop();
        }
    }
    while(stack.top!=-1)
        res.push_back(stack.pop());
    string rev="";
    for(int i=res.length()-1;i>=0;i--)
        rev.push_back(res[i]);
    return rev;
}

int main(){
    string str;
    cout<<"Enter Infix Expression:";
    cin>>str;
    cout<<"Prefix:"<<prefix(str);
    return 0;
}
