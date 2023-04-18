#include <iostream>
using namespace std;
int main()
{
	int l1, r1, l2, r2, x;
	cin >> l1 >> r1 >> l2 >> r2;
	if (l1 < l2) {
		if (r1 > r2) {
			x = r2 - l2;
		}
		else {
			x = r1 - l2;
		}
	}
	else {
		if (r1 > r2) {
			x = r2 - l1;
		}
		else {
			x = r1 - l1;
		}
	}
	if (x > 0) {
		cout << x;
	}
	else {
		cout << 0;
	}
	return 0;
}
