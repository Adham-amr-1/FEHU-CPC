#include <iostream>
using namespace std;
int main()
{
	int n, a, x, y, cost = 0;
	cin >> n >> a >> x >> y;
	if (n > a) {
		while (n--) {
			if (n >= a) {
				cost += y;
			}
			else {
				cost += x;
			}
		}
	}
	else {
		while (n--) {
			cost += x;
		}
	}
		cout << cost;
	return 0;
}
