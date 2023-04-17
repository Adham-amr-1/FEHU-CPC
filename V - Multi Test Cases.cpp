#include <iostream>
using namespace std;
int main()
{
	int t, count, n;
	long long a;
	cin >> t;
	while (t--) {
		cin >> n;
		count = 0;
		while (n--) {
			cin >> a;
			if (a % 2 != 0) {
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
