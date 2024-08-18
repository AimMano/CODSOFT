
#include<iostream>
#include<string>
using namespace std;
int main(){
    int number1;
    cout<<"enter the first number=";
    cin>>number1;
    int number2;
    cout<<"enter the second number=";
    cin>>number2;
    char ch;
    cout<<"Enter the operation to perform:";
    cin>>ch;
    //resultant of opertion
int sum,diff,multi,div;
    //using switch
    switch(ch){
        case '+':
         sum=number1+number2;
        cout<<number1<<"+"<<number2<<"="<<sum;
        break;
        case '-':
         diff=number1-number2;
        cout<<number1<<"-"<<number2<<"="<<diff;
        break;
        case '*':
         multi=number1*number2;
        cout<<number1<<"*"<<number2<<"="<<multi;
        break;
        case '/':
         div=number1/number2;
        cout<<number1<<"/"<<number2<<"="<<div;
        break;
        defualt:
        cout<<"Invalid character";
    }
    return 0;
}
