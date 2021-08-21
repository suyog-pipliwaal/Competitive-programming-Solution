#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin >> size;
	int *arr = new int[size];
	for(int i = 0;i<size;i++){
		cin >> arr[i];
	}
	int max = 0;
	int product  = 1,length = 0;
	for(int i = 0;i < size;i++){
		product = product*arr[i];
		if(product==0){
			length = 0;
			product = 1;
		}
		else{
			length++;
			if(length>=max){
				max = length;
			}
		}
		//cout << "product = " << product << " length = " << length << "\n";
	}
	cout << max << "\n";	
}
