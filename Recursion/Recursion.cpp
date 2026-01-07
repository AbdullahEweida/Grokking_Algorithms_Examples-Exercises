#include <iostream>
using namespace std;

// print the numbers from n to 0.- Recursion
void countDown_using_recursion(int n) {
	// Base case: when n reaches 0, stop the recursion
	if (n <= 0) {
		cout << "Countdown finished!" << endl;
		return;
	}
	// Print the current number
	cout << n << "\t";
	// Recursive call with decremented value
	countDown_using_recursion(n - 1);
}
// print the numbers from n to 1.- iteration
void countDown_using_iteration(int n) {
	for (int i = n; i >= 1; i--) {
		cout << i << "\t";
	}
	cout << endl;
}
// Calculate factorial of a number using recursion
int calculate_factorial_recursive(int n) {
	// Base case: when n reaches 2, stop the recursion and return 2.
	if (n == 2){
		return 2;
	}
	return n * calculate_factorial_recursive(n - 1);
}
// Calculate factorial of a number using iteration
int calculate_factorial_iterative(int n) {
	int result = 1;
	for (int i = n; i >= 2; i--) {
		result *= i;
	}
	return result;
}

int main() {
	int number;
	// Demonstrate countdown using recursion
	cout << "Enter a number for countdown using recursion: ";
	cin >> number;
	countDown_using_recursion(number);
	// Demonstrate countdown using iteration
	cout << "Enter a number for countdown using iteration: ";
	cin >> number;
	countDown_using_iteration(number);
	// Demonstrate factorial calculation using recursion
	cout << "Enter a number to calculate factorial using recursion: ";
	cin >> number;
	cout << "Factorial of " << number << " (recursive): " << calculate_factorial_recursive(number) << endl;
	// Demonstrate factorial calculation using iteration
	cout << "Enter a number to calculate factorial using iteration: ";
	cin >> number;
	cout << "Factorial of " << number << " (iterative): " << calculate_factorial_iterative(number) << endl;
	return 0;
}