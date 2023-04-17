#include <iostream>
using namespace std;
int main()
{
	int p[4], count = 0, i;
	for (i = 0; i < 4; i++) {
		cin >> p[i];
	}
	for (i = 0; i < 4; i++) {
		if (p[i] >= 10) {
			count++;
		}
	}
	cout << count;
	return 0;
}
