#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long rows = n / a;
    if (n % a != 0) rows++;
    long long cols = m / a;
    if (m % a != 0) cols++;
    long long total = rows * cols;
    cout << total << endl;
    return 0;
}
