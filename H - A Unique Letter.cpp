#include <iostream>
using namespace std;
int main()
{
	string st;
	int i, count = 0;
	cin >> st;
	if (st[0] == st[1] && st[0] == st[2] && st[1] == st[2]) {
		cout << -1;
	}
	else {
		if (st[0] == st[1]) {
			cout << st[2];
		}
		else if (st[0] == st[2]) {
			cout << st[1];
		}
		else if (st[1] == st[2]) {
			cout << st[0];
		}
		else {
			cout << st[0];
		}
	}
	return 0;
}
