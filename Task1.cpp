#include<iostream>
using namespace std;
void add(int number1, int number2);
void multiplication(int number1, int number2);
void subtraction(int number1, int number2);
main()
{
int no1,no2;
char operation;
cout <<"Enter 1st no : " ;
cin >> no1;
cout <<"Enter 2nd no : " ;
cin >> no2;
cout <<"Enter Choice : " ;
cin >> operation;
if(operation=='+'){
add(no1,no2);

} 
if(operation=='-'){

subtraction(no1,no2);
}
if(operation=='*'){
multiplication(no1,no2);
}

}
void add(int number1, int number2)
{
int sum;
sum=number1+number2;
cout << "Sum is : " << sum <<endl;

}
void multiplication(int number1, int number2)
{
int product;
product=number1*number2;
cout << "Product is : " <<product << endl;

}
void subtraction(int number1, int number2){
int minus = number1-number2;
cout << "Subtraction is : " <<minus;
}