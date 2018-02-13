/*
 * main.cpp
 *
 *  Created on: 13 de fev de 2018
 *      Author: theman101
 */


#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
	system("clear");

	//declare variables
	int secret, guess;
	char playAgain;

	//generate a random number for the variable 'secret'
	srand(time(NULL));
	secret = rand()%100+0;

	cout << "number guessing game" << endl;
	cout <<"-------------------\n"<<endl;
	cout<<"guess a random number between 0 and 100"<<endl;
	cout<<"Guess: ";
	cin >> guess;

	while(secret != guess){
		if(guess < secret){
			cout<<"incorrect guess, try higher"<<endl;
			cout<<"Guess: ";
			cin >> guess;
		}else{
			cout<<"incorrect guess, try lower"<<endl;
			cout<<"Guess: ";
			cin >> guess;
		}

	}

	cout<<"you are right! Secret was: "<<secret<<endl;
	cout<<"do you want to play again? Y/N";
	cin >> playAgain;

	if(playAgain == 'Y' || playAgain == 'y'){
		return main();
	}else{
		return 0;
	}
}

