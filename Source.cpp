#include <iostream>
#include <iomanip>

using namespace std;


int main() {

	int selection = 0;
	double savingsAmount;
	double checkingAmount;
	
	double savingsBalance = 100.50;
	double checkingBalance = 100.50;

	while (selection != 7) {

		cout << "Welcome to People's Second Bank ATM" << endl;

		cout << "(1) to deposit to savings account" << endl;
		cout << "(2) to deposit to checking account" << endl;
		cout << "(3) to withdraw from savings account" << endl;
		cout << "(4) to withdraw from checking account" << endl;
		cout << "(5) to transfer from savings to checking" << endl;
		cout << "(6) to transfer from checking to savings" << endl;
		cout << "(7) to exit" << endl;

		cin >> selection;

		if (cin.fail()) {
			cin.clear();
			cout << "not recognized value" << endl;
		}
		else {
			switch (selection) {

			case 1:
				cout << "How much do you want to deposit in savings? $";
				cin >> savingsAmount;
				if (savingsAmount < 0) {
					cout << "Please enter a positive number!";
				}
				else {
					savingsBalance = savingsBalance + savingsAmount;
					//cout << savingsBalance << endl;
					cout << "Savings: $" << setprecision(2) << fixed << savingsBalance << "\n" << "Checking: $" << setprecision(2) << fixed << checkingBalance << endl;

				}
				break;
			case 2:
				cout << "How much do you want to deposit in checking? $";
				cin >> checkingAmount;
				if (checkingAmount < 0) {
					cout << "Please enter a positive number!";
				}
				else {
					checkingBalance = checkingBalance + checkingAmount;
					//cout << checkingBalance << endl;
					cout << "Savings: $" << setprecision(2) << fixed << savingsBalance << "\n" << "Checking: $" << setprecision(2) << fixed << checkingBalance << endl;

				}
				break;
			case 3:
				cout << "How much do you want to withdraw from savings? $";
				cin >> savingsAmount;
				if (savingsAmount > savingsBalance) {
					cout << "INSUFFICIENT FUNDS!" << endl;
				}
				else {
					savingsBalance = savingsBalance - savingsAmount;
					//cout << savingsBalance << endl;
					cout << "Savings: $" << setprecision(2) << fixed << savingsBalance << "\n" << "Checking: $" << setprecision(2) << fixed << checkingBalance << endl;

				}
				break;
			case 4:
				cout << "How much do you want to withdraw from checking? $";
				cin >> checkingAmount;
				if (checkingAmount > checkingBalance) {
					cout << "INSUFFICIENT FUNDS!" << endl;
				}
				else {
					checkingBalance = checkingBalance - checkingAmount;
					//cout << checkingBalance << endl;
					cout << "Savings: $" << setprecision(2) << fixed << savingsBalance << "\n" << "Checking: $" << setprecision(2) << fixed << checkingBalance << endl;

				}
				break;
			case 5:
				cout << "How much do you want to transfer from savings to checking? $";
				cin >> savingsAmount; 
				if (savingsAmount > savingsBalance) {
					cout << "INSUFFICIENT FUNDS!" << endl;
				}
				else {
					savingsBalance = savingsBalance - savingsAmount;
					checkingBalance = checkingBalance + savingsAmount;
					//cout << checkingBalance << endl;
					cout << "Savings: $" << setprecision(2) << fixed << savingsBalance << "\n" << "Checking: $" << setprecision(2) << fixed << checkingBalance << endl;

				}
				break;
			case 6:
				cout << "How much do you want to transfer from checking to savings? $";
				cin >> checkingAmount;
				if (checkingAmount > checkingBalance) {
					cout << "INSUFFICIENT FUNDS!" << endl;
				}
				else {
					savingsBalance = savingsBalance + savingsAmount;
					checkingBalance = checkingBalance - savingsAmount;
					//cout << checkingBalance << endl;
					cout << "Savings: $" << setprecision(2) << fixed << savingsBalance << "\n" << "Checking: $" << setprecision(2) << fixed << checkingBalance << endl;
				}
					break;
			case 7:
				cout << "Goodbye!" << endl;
				cout << "Click ENTER to continue" << endl;
				break;
			default:
				cout << "invalid selection, try again" << endl;
				break;

			}

			//cout << "Savings: $" << setprecision(2) << fixed << savingsBalance << "\n" << "Checking: $" << setprecision(2) << fixed << checkingBalance << endl;

		}




		cin.get();
		cin.get();

	}

}