#include <iostream>
using namespace std;
int main()
{
	int t, a, b, c, mid;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
		if (a > b && a > c) {
			if (b > c) {
				mid = b;
			}
			else {
				mid = c;
			}
		}
		else if (b > a && b > c) {
			if (a > c) {
				mid = a;
			}
			else {
				mid = c;
			}
		}
		else if (c > a && b < c) {
			if (a > b) {
				mid = a;
			}
			else {
				mid = b;
			}
		}
		cout << mid << endl;
	}

	return 0;
}
