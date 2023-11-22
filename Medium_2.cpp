// 2. Write a program to make a calculator.

#include<iostream>
using namespace std;
int main(){
    char op;
    int num1,num2;
    cout<<"Enter operator(+, -, *, /) : ";
    cin>>op;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    switch(op){
        case '+':
            cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
            break;
        case '-':
            cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
        case '*':
            cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
            break;
        case '/':
            if(num2!=0){
                cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
            } 
            else{
                cout<< "Error: Division by zero is undefined."<<endl;
            }
            break;
        default:
            cout<<"Error: Invalid operator."<<endl;
    }
    return 0;
}