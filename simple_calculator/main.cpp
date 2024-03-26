#include <iostream>
#include <conio.h>
using namespace std;

/*
*  Program name:              simple_calculator.cpp
*  Author:                    Katlego Motaung
*  Date of completion:        26/03/2024
*/
int calculator(void){

	int a, b, res; // operands
	char op; 	   // operator
	cout << "A simple calculator.\n\n" << endl;
            for(int i = 0; i < 900000000l; i++)
                ; //  load program
            system("CLS");
    cout << "Enter first digit:";
	cin >> a;
	res = a;	   //to store results e.g "a + b"
	cout << "\nEnter operation: ";
	cin >> op;
	switch(op){    //here calculations are performed
		case '+':
		    cout << "\nEnter second digit: ";
			cin >> b;
			res += b;
            cout << endl << endl;
            cout << a << " + " << b <<" = ";
			break;
		case '-':
		    cout << "\nEnter second digit: ";
			cin >> b;
			cout << endl << endl;
            cout << a << " - " << b <<" = ";
			res -= b;
			break;
		case '*':
		    cout << "\nEnter second digit: ";
			cin >> b;
			res *= b;
			cout << endl << endl;
            cout << a << " * " << b <<" = ";
			break;
		case '/':
		    cout << "\nEnter second digit: ";
			cin >> b;
			if(b!=0){
                cout << endl;
                cout << a << " + " << b <<" = ";
                res = res/b;
			}
			else
				cout << "Math error.\n";
			break;
		default:
			cout << "Invalid operation! Restart program for reuse.\n";
			break;
	}
	return res;
}
int main(){
	cout << calculator();
	cout << "\nEnd of program...";
	return 0;
}
