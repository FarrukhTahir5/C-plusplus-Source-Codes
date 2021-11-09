//Program For Postfix Evaluation Using Stack
#include<iostream>
using namespace std;
const int MAX=20;
class Stack{
	public:
		float arr[MAX];
		int top=-1;
		float pop(){
			if(top>-1)
			return arr[top--];
			else
			{
				cout<<"Stack UnderFlow";
				return 0;
			}
		}
		void push(int a){
			if(top<MAX)
			arr[++top]=a;
			else
			cout<<"Stack Overflow";
		}
		
};
int main(){
	cout<<"Enter Postfix Expression:";
	string str; 
	Stack s;
	cin>>str;
	for(int i=0;i<str.length();i++){
		//Operator
		if(str[i]>='0'&&str[i]<='9'){
			s.push((float)(str[i]-48));
			
		}
		//Operand
		else{
			//two operands-> grab
			int o2=s.pop();
			int o1=s.pop();
			switch(str[i]){
				case '+':
					s.push(o1+o2);
					break;
				case '-':
					s.push(o1-o2);
					break;
				case '*':
					s.push(o1*o2);
					break;
				case '/':
					s.push(o1/o2);
					break;
				default:
					cout<<"Syntax Error";
			}			
		}
		
	}
	cout<<"\nResult:"<<s.pop();
}
