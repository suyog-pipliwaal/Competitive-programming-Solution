#include<iostream>
#include<string>
#include <algorithm>
bool is_palindrome(std::string s) {
	std::string rev = s;
	std::reverse(rev.begin(), rev.end());
	return s == rev;
};

int good(int x, std::string s) {
	int n = s.length();
	for (int L = 0; L+x <=n; L++) {
		if(is_palindrome(s.substr(L, x))) return L;
	}
	return -1;
};

class Solution{
public:
	std::string longestPalindrome(std::string s) {
		int n = s.length();
		int best_len = 0;
		std::string best_s = "";
		for (int parity: {0,1}) {
			int low = 0, high = 1;
			if (low%2!=parity) {
				low++;
			}
			if (high%2!=parity) {
				high++;
			}

			while(low <= high) {
				int mid = (low+high);
				if(mid%2!=parity) {
					mid++;
				}
				if(mid > high){
					break;
				}
				int tmp = good(mid, s);
				if(tmp!=-1) {
					if(mid> best_len) {
							best_len = mid;
							best_s = s.substr(tmp, mid);

					}
					low = mid + 2;
				}
				else {
					high = mid - 2;
				}
		}
	}
		return best_s;
	}
};

int main(){
	Solution sol;
	std::string s = "abba";
	std::cout<< sol.longestPalindrome(s) << std::endl;
};

