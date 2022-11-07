// REVERSE THE GIVEN STRING //

#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin >> str;
	reverse(str.begin(), str.end());
	cout << str << endl;
}

//OR

#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    string ans;
    for (int i = str.size() - 1; i >= 0; i--){
        ans += str[i];
    }
    cout << ans << endl;
    return 0;
}
