#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i] - '0' <= 9){
			cout << s[i];
		}
	}
	cout << endl;
}
