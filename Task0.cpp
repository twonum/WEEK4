#include<iostream>
using namespace std;
void printNAME(string name);
main(){
string name="Ali";
printNAME(name);
printNAME("bilal");
string second;

cout << "Enetr Name : " ;
cin >>second;
printNAME(second);
}
void printNAME(string name)
{
cout << "Name is : " << name << endl;


}