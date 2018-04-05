// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

/*
Joseph Sanger
Assignment 7
*/

#include "stdafx.h"
#include "stdio.h"

// Deposit Function - Takes the input and the current balance. and checks if the input meets the requirements. 
// Returns old balance if it does not, returns the new balance if it does.

int Deposit(int num1, int num2){
	int total;
	total = num1 + num2;

		if (num1 > 10000 || num1 <= 0)
		{
			printf("Please enter amount between 1 and 10000\n");
			return num2;
		}
		else
			return total;
}

// Withdraw function, takes the input and the current balance and checks it against the withdraw limit, or if trying to withdraw zero. 
// Returns the old balance if it does not meet the conditions, otherwise returns the new balance.

int Withdraw(int num1, int num2){
	int total;
	total = num2 - num1;

		if (num1 == 0)
		{
			printf("You cannot withdraw zero\n");
			return num2;
		}
		if (total < 10)
		{
			printf("You must leave at least $10.00 in your account\n");
			return num2;
		}
		else{
			return total;
		}
	}

// Start of main 

int main(void)
{

int selection = 0;
// $100 starting balance
float balance = 100;
int input = 0;

do
{
	printf("Main Menu\n");
	printf("Enter 1 to get balance.\n");
	printf("Enter 2 to make deposit.\n");
	printf("Enter 3 to make withdrawl\n");
	printf("Enter 4 to exit\n");
	scanf_s("%d", &selection);
	switch (selection) {
	case 1:
		printf("Current balance is $%.2f\n", balance);
		break;
	case 2:
		printf("Please enter deposit amount\n ");
		scanf_s("%d", &input);
		balance = Deposit(input, balance);
		break;
	case 3:
		printf("Please enter withdraw amount\n");
		scanf_s("%d", &input);
		balance = Withdraw(input, balance);
		break;
	case 4:
		printf("Thank you. Press any key...\n");
		break;
	default:
		printf("Please enter a valid selection 1-4\n");
	}
}
	while (selection != 4);
	return 0;
}