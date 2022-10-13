#include <iostream>
#include <math.h>
#include <map>
using namespace std;
void run_test_case(){
	map<char, int> mp;
	int d;
	string s;
	cin >> d >> s;
	int max = 0;
	for(int i = 0; i < s.length(); i++){
		mp[s[i]]++;
	}
	for(auto x : mp){
		if(x.second > max) max = x.second;
	}
	if((max - 1) * (d - 1) <= s.size() - max) cout << "1" << endl;
	else cout << "-1" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		run_test_case();
	}
}
