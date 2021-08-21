#include<iostream>
#include<string>
using namespace std;
int main(){
	int testcase;
	cin >> testcase;
	//cout << "testcase = "<< testcase;
	int count = 0;
	while(testcase!=0){
		//cout << "this is " << testcase <<"\n";
		string number;
		cin >> number;
		count = 0;
		//cout << number <<"\n";
		for(int i = 0;i<number.length();i++){
			if(!((number.at(i)=='4')||(number.at(i)=='7'))){
				count++;
			}
		}
		cout << count << "\n";
	testcase--;	
	}
}
