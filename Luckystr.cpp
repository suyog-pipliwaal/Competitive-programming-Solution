#include<bits/stdc++.h>
using namespace std;
int isgood(string str,vector<string>&fav){
	int flag =0 ;
	if(str.length()>=47){
		flag =  1;
	}
	else{
		for(int i = 0;i<fav.size();i++){
			if (str.find(fav[i]) != string::npos) {
				flag  = 1;
				break;
			}
			else{
				flag = 0;
			}
			/*cout << " in isgoood function ";
			cout <<  str << " "<<fav[i] << " "<< flag << "\n";*/
		}
	
	}
	return flag;
}
int main(){
	int k,n;
	vector<string> fav;
	vector<string> lucky;
	cin >> k >>n;
	for(int i = 0; i < k;i++){
		string str;
		cin>>str;
		fav.push_back(str);
	}
	for(int i = 0;i<n;i++){
		string str;
		cin>>str;
		lucky.push_back(str);
	}
	for(int i=0;i<n;i++){
		//cout <<lucky[i] << " " << isgood(lucky[i],fav) << "\n";
		if(isgood(lucky[i],fav)==1){
			cout <<	"Good\n";
		}
		else{
			cout <<	"Bad\n";
		}
	}
}
