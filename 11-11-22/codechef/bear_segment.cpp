#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
	    int flag = 0;

	    string s;
	    cin >> s;
	    for (int j = 0; j < size(s); j++) {
	        if (s[j] == '1' && flag == 0)
	            flag = 1;
	        if (s[j] == '0' && flag == 1)
	            flag = 2;
	        if (s[j] == '1' && flag == 2) {
	            flag = 3;
	            break;
	        }
	    }
	    if (flag == 0 || flag == 3)
	        cout << "NO";
	    else
	        cout << "YES";
	    cout << endl;
	}
	return 0;
}
