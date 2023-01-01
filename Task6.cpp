#include<iostream>
using namespace std;
void GreaterNum(int num1, int num2 );
main()
{

int no1,no2;
cout << "Enter No1 : " ;
cin >> no1;
cout << "Enter No2 : ";
cin >> no2;
GreaterNum(no1,no2);

}

void GreaterNum(int num1, int num2 )
{
if(num1>num2)
{
cout << "No1 is greater : " <<endl;
}
if(num1<num2)
{
cout << "No2 is greater : " <<endl;
}
if(num1==num2)
{
cout << "No1 and No2 are equal  : " <<endl;
}
}