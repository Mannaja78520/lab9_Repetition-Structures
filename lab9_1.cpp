#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	int i = 1;
	double loan, ratePerYear, payment, prevBalance, interest, total, newBalance;
	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> ratePerYear;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 

	prevBalance = loan;

	while (prevBalance != 0){
		interest = prevBalance * ratePerYear / 100;
		total = prevBalance + interest;
		newBalance = total - payment;
		if (newBalance <= 0){
			payment = total;
			newBalance = 0;
		}

		cout << setw(13) << left << i; 
		cout << setw(13) << left << prevBalance;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << newBalance;
		cout << "\n";
		
		prevBalance = newBalance;
		i++;	
	}

	return 0;
}
