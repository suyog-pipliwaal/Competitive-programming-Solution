#include<iostream>
#include <algorithm>
#include<new>
using namespace std;
int main(){
	int testcase;
	cin >> testcase;
	while(testcase!=0){
		int size_of_road;
		cin >> size_of_road;
		int *weight = new (nothrow) int[size_of_road];
		for(int i=0;i<size_of_road;i++){
			cin >> weight[i];
		}
		int max = weight[0],velocity;
		for(int i = 0;i<size_of_road;i++){
			velocity = weight[i]+i;
			if(velocity>=max){
				max = velocity;
			}
		}
		
		cout << max<< "\n";
	testcase--;
	}
}
