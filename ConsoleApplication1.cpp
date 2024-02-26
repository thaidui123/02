// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


#include <iostream>
using namespace std;
int main() {
	int so1, so2, hieu;
	cout << "chuong trinh tinh hieu\n";
	cout << "nhap so thu nhat:";
	cin >> so1;
	cout << "nhap so thu 2:";
	cin >> so2;
	hieu = so1 - so2;
	cout << so1 << "-" << so2 << "="
		<< hieu
		<< endl;
	return 0;