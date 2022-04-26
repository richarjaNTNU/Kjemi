#include "std_lib_facilities.h"

//------------------------------------------------------------------------------'

// a
int maxOfTwo(int a, int b)
{
	if (a > b) {
		cout << "A is greater than B" << '\n';
		return a;		
	}
	else {
		cout << "B is greater than or equal to A" << '\n';
		return b;
	}
}


//------------------------------------------------------------------------------

// c
int fibonacci(int n){
	int a = 0;
	int b = 1;
	cout << "Fibonacci numbers: ";
	for (int x = 1; x < n+1 ;++x) {
		cout << '\n' << x << " " << b;
		int temp = b;
		b += a;
		a = temp;
	}
	cout << '\n' << "----" << '\n';
	return b;
}

//------------------------------------------------------------------------------

// d

int squareNumberSum(int n){
	int totalSum = 0;
	for (int i = 0; i<n; ++i){
		totalSum += (i * i);
		cout << (i * i) << '\n';
	}
	cout << "totalsum " << totalSum << '\n';
	return totalSum;
}

//------------------------------------------------------------------------------

// e

int triangleNumbersBelow(int n){
	int acc = 1;
	int num = 2;
	cout << "Triangle numbers below " << n << ":";
	while (acc < n){
		cout << '\n' << (acc);
		acc += num;
		num += 1;
	}
	return 0;
}

//------------------------------------------------------------------------------

// f

bool isPrime(int n){
	for (int j = 2; j < n; ++j){
		if (n % j == 0){
			return false;
		}
	}
	return true;
}

//------------------------------------------------------------------------------

// g

void naivePrimeNumberSearch(int n){
	for (int number = 2; number < n; ++number){
		if (isPrime(number)){
			cout << number << " " << "is a prime" << endl;
		}
	}
}

//------------------------------------------------------------------------------

// h

int findGreatestDivisor(int n){
	for (int divisor = (n-1); divisor > 0; divisor = divisor - 1){
		if (n%divisor == 0){
			return divisor;
			}
	}
	return 1;
}
//------------------------------------------------------------------------------



//------------------------------------------------------------------------------
// main
int main(){
	cout << "Oppgave a)\n";
	maxOfTwo(5,6);

	cout << "Oppgave c)\n";
	cout << fibonacci(10) << '\n';

	cout << "Oppgave d)\n";
	cout << squareNumberSum(9) << '\n';

	cout << "Oppgave e)\n";
	cout << triangleNumbersBelow(9) << '\n';

	cout << "Oppgave f)\n";
	cout << isPrime(13) << '\n';

	cout << "Oppgave g)\n";
	// cout << naivePrimeNumberSearch(13) << '\n'; fungerer ikke
	naivePrimeNumberSearch(13); // virker som dette er riktig måte å kjøre funksjonen
	// Hva er egentlig forskjellen på å kjøre en void funksjon og en int funksjon med return 0; ?

	cout << "Oppgave h)\n";
	cout << findGreatestDivisor(100) << '\n';
}

