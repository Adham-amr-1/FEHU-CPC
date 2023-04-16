#include <iostream>
using namespace std;
int main()
{
	int n, i, countA = 0, countD = 0;
	cin >> n;
	char* arr = new char[n];
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (i = 0; i < n; i++) {
		if (arr[i] == 'A') {
			countA++;
		}
		else if (arr[i] == 'D') {
			countD++;
		}
	}
	if (countA > countD) {
		cout << "Anton";
	}
	else if (countA < countD) {
		cout << "Danik";
	}
	else {
		cout << "Friendship";
	}
	return 0;
}
