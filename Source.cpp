#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Declare global variables.
int computer_choice;
char user_choice;
//Create a function for determining computer's choice.
void computerchoice() {
		const int MAX = 3, MIN = 1;
		unsigned seed = time(0);
		srand(seed);
		computer_choice = rand() % (MAX - MIN + 1) + MIN;
}
//Create a function for determining user's choice.
void userchoice() {
	cout << "Enter 1 if you choose rock, 2 if you choose paper and 3 if you choose scissors.\n";
	cin >> user_choice;
	//Test user's input for validation.
	while (user_choice!= '1' && user_choice != '2' && user_choice!= '3') {
		cout << "Your choice is invalid. Please enter a valid choice.\n";
		cin >> user_choice;
	}
	//Display computer's choice.
		switch (computer_choice) {
		case 1: cout << "Computer chose rock.\n";
			break;
		case 2: cout << "Computer chose paper.\n";
			break;
		case 3: cout << "Computer chose scissors.\n";
		}
	}
//Create a function for determining and displaying the winner.
void winner() {
	while ((computer_choice == 1 && user_choice == '1') || (computer_choice == 2 && user_choice == '2') || (computer_choice == 3 && user_choice == '3')) {
			cout << "Both you and the computer have the same choice! Thus, please play the game again.\n";
			computerchoice();
			userchoice();
		}
		if (computer_choice == 1 && user_choice == '2') {
			cout << "You win since paper wraps rock!\n";
		}
		else if (computer_choice == 1 && user_choice == '3') {
			cout << "You lose since rock smashes scissors!\n";
		}
		else if (computer_choice == 2 && user_choice == '1') {
			cout << "You lose since paper wraps rock!\n";
		}
		else if (computer_choice == 2 && user_choice == '3') {
			cout << "You win since scissors cut paper!\n";
		}
		else if (computer_choice == 3 && user_choice == '1') {
			cout << "You win since rock smashes scissors!\n";
		}
		else if (computer_choice == 3 && user_choice == '2') {
			cout << "You lose since scissors cut paper!\n";
		}
}
//Use main function to welcome the user to the game and call the other functions.
int main() {
	char decision;
	do {
		cout << "Welcome to the classic game of Rock, Paper and Scissors.\n";
		computerchoice();
		userchoice();
		winner();
		cout << "Do you want to play again? Enter \"Y\" or \"y\" for yes. Enter any other key for no.\n";
		cin >> decision;
	} while (decision == 'Y' || decision == 'y');
	if (decision != 'Y' && decision != 'y')
		cout << "Thank you for playing the game.\n";
		return 0;
		/*
		Name: Seeyan Shabbar Gaus Newaz
		Course Name: Computer Science
		Course Number: 1336
		Section: 0L2
		Due Date: October 11, 2022 by 11:59pm
		Date completed: October 8, 2022
		Date submitted: October 11, 2022
		*/
}
