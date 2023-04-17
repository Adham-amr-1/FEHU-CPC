#include <iostream>
using namespace std;
int main()
{
	int n, i, count;
	string s = "codeforces";
	char st;
	cin >> n;
	while (n--) {
		cin >> st;
		count = 0;
		for (i = 0; i < s.length(); i++) {
			if (s[i] == st) {
				count++;
			}
		}
		if (count) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
