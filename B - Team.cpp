#include <iostream>
using namespace std;
int main()
{
	int n, a, b, c, counte = 0;
	cin >> n;
	while (n--) {
		cin >> a >> b >> c;
		if ((a + b + c) > 1) {
			counte++;
		}
	}
	cout << counte;
	return 0;
}
