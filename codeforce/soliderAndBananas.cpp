#include<bits/stdc++.h>
using namespace std;
int main () {
	int initPrice, amount, numberOfbananas;
	cin >> initPrice >> amount >> numberOfbananas;
	int totalCost = 0;
	for(int i = 1; i <= numberOfbananas; i++) {
		totalCost = totalCost+ initPrice*i;
	}
	if (totalCost-amount >0)
		cout << totalCost-amount << endl;
	else 
		cout << 0<< endl;

}
