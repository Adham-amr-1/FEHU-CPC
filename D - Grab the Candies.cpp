#include <iostream>
using namespace std;
int main()
{
	int t, n, i;
	cin >> t;
	while (t--) {
		cin >> n;
		int* arr = new int[n];
		for (i = 0; i < n; i++) {
			cin >> arr[i];
		}
		
		int mihai = 0, bianca = 0;
		for (i = 0; i < n; i++) {
			if (arr[i] % 2 == 0) {
				mihai += arr[i];
			}
			else {
				bianca += arr[i];
			}
		}
		if (mihai > bianca) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
