#include<bits/stdc++.h> 
using namespace std;
int main() {
	int currentRow, currentCol;
	int matrix[5][5];
	for(int i = 0; i<5; i++) {
		for(int j = 0; j<5; j++) {
			cin >> matrix[i][j];
			if(matrix[i][j]==1){
				currentRow = i+1;
				currentCol = j+1;
			}
		}
	}
	cout << abs(currentCol-3)+abs(currentRow - 3) << endl;
	return 0;
}
