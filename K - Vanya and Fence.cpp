#include <iostream>
using namespace std;
int main()
{
	int n, h, i, count = 0;
	cin >> n >> h;
	int* mantall = new int[n];
	for (i = 0; i < n; i++) {
		cin >> mantall[i];
	}
	for (i = 0; i < n; i++) {
		if (mantall[i] > h) {
			count += 2;
		}
		else {
			count++;
		}
	}
	cout << count;
	return 0;
}
