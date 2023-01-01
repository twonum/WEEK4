#include<iostream>
using namespace std;
void totalAmount(string day, int amount);
main(){
int amount;
string day;
cout << "Enter Purchase amount : ";
cin >> amount;
cout << "Enter Day : ";
cin >> day;
totalAmount(day,amount);
}

void totalAmount(string day, int amount)
{
if(day=="sunday"){
amount=amount-((amount*10)/100);
cout << "Your discounted price is " <<amount;
}
if(day!="sunday"){
amount=amount-((amount*5)/100);
cout << "Your discounted price is " <<amount;
}
}