#include<iostream>
using namespace std;
void isEven(int num);
main()

{
int num;
while(1){
cout << "Enter a NO : ";
cin >> num;
isEven(num);

}
}
void isEven(int num)
{
if(num%2==0)
cout << "It is an even no ! " << endl ;
if(num%2!=0)
cout << "It is a odd no ! " << endl;
}