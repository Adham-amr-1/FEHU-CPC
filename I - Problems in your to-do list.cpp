#include <iostream>
using namespace std;
int main()
{
	int t, n, i;
	cin >> t;
	while (t--) {
		int count = 0;
		cin >> n;
		int* arr = new int[n];
		for (i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (i = 0; i < n; i++) {
			if (arr[i] >= 1000) {
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
