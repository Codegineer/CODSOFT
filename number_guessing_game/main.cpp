#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
/*
*   Program name: Number Guessing Game
*   Author: Katlego Motaung
*   Date of creation:
*           25/03/2024
*/
using namespace std;
bool guess_func(int guess, int rnd){            ///Determines the correct guess.
    return guess == rnd;
}
int main(){
    srand(time(0));                             ///Seed a random number.
    int rnd = rand()%200 + 1;                   ///Number in guess is from 1 through 200.
	int attempt = 0, guess;

	cout << "This is a number guessing game!\n\n";
	cout << "Try to guess any number from 1 to 200. \nI'll tell you if you're correct or not.'\n\n";

		cin>> guess;

	while(attempt < 3 && !guess_func(guess,rnd) ){ ///Evaluates if the number of legal attempts are over/Checks for Game Over
		if(guess > 200 || guess < 1){              ///Attempts are saved if the number guessed is out of range
            cout << "Number out of range!\n"
                 << "Try to guess any number from 1 to 200. \nI'll tell you if you're correct or not.'\n\n";
                 cin >> guess;

		}else{
		    if(guess < rnd)
		    cout << "Your number is smaller!\n";
		if(guess > rnd)
		    cout << "Your number is bigger!\n";
		if(++attempt < 3){
		    cout << "\nTry again:";
		    cin>>guess;
		}
		if(guess == rnd){
            system("CLS");
            cout << "Congrats!\n";
            break;
		}

		}
	}
	cin.clear();
	if(attempt == 3)
        system("CLS");
        cout << "Sorry! Better luck next time!!\n";
	return 0;
}
