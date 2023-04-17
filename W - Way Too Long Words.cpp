#include <iostream>
using namespace std;
int main()
{
	int n, i;
	cin >> n;
	string* wor = new string[n];
	int* len = new int[n];
	for (i = 0; i < n; i++) {
		cin >> wor[i];
		len[i] = wor[i].length();
	}
	for (i = 0; i < n; i++) {
		if (len[i] > 10) {
			cout << wor[i][0] << len[i]-2 << wor[i].back() << endl;
		}
		else {
			cout << wor[i] << endl;
		}
	}


	return 0;
}
