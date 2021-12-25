#include <iostream>


#include <string>
using namespace std;
string Binary(int number)
{
    string bin;
    while(number!=0) {bin=(number%2==0 ?"0":"1")+bin; number/=2;}
    return bin;
}


int main(){
	int n;

	cout << "Enter the decimal number: ";
cin >> dec >> n;
cout << "The octal value = "
<< oct << n << endl;
cout << " The hexadecimal value = "
<< hex << n << endl;
cout<<"The binary value =  "<<Binary(n);
}
