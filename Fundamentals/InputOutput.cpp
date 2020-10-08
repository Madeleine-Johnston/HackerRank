#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;

//based upon HackerRank tutorials

void addition() {
	int a, b, c, x;
	// read input of 3 numbers separated by spaces and prints sum 
	cin >> a >> b >> c;
	x = (a + b + c);
	cout << x << endl;
}

void dataTypes() {
	//input different data types and outputs same
	int a; long b; char c; float d; double e;
	cin >> a >> b >> c >> d >> e;
	cout << a << "\n" << b << "\n" << c << "\n";
	printf_s("%f\n%lf\n", d, e);

}

void elseIfStatement() {
	//returns char related to int input and detcts if out of bounds
	cout << "Input a number between 1 and 5:	";

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if (n == 1) {
		cout << "One", '\n';
	}
		else if (n == 2) {
			cout << "Two", '\n';
		}
			else if (n == 3) {
				cout << "Three", '\n';
			}
				else if (n == 4) {
					cout << "Four", '\n';
				}
					else if (n == 5) {
						cout << "Five", '\n';
					}
						else if (n > 5) {
							cout << "Number too large.";
						}
							else if (n < 1) {
								cout << "Number too small.";
							}
								else { cout << "Invalid Input."; }

}

void oddEven() {
	//determines if number input is odd or even
	cout << "Input a number:	";

	int a;
	cin >> a;
	
	for (int i = a; i <= a; i++) {
		cout << (i % 2 ? "odd" : "even") << endl;
	}
	
}

int main() {
	//addition();
	//dataTypes();
	//elseIfStatement();
	oddEven();
	return 0;
}



