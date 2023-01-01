#include<iostream>
using namespace std;
void isEligible(int age);
main(){
int age;
while(true){
cout << "Enter your age : " ;
cin >> age;
isEligible(age);
}
}
void isEligible(int age){
if(age>=18){
cout << "Your Eligible ! ";
}
if(age<18){
cout << "Your not Eligible : ";
}
}