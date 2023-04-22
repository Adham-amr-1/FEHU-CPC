#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, t;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n == 1)      { counter1++; }
        else if (n == 2) { counter2++; }
        else if (n == 3) { counter3++; }
        else             { counter4++; }
    }
    double taxi = 0;
    if ((counter1 >= counter3) || (counter3 <= counter1)) counter1 -= counter3;
    else counter1 = 0;
    taxi = counter4 + counter3 + (counter1 + counter2 * 2.0) / 4.0;
    cout << ceil(taxi);
    return 0;
}
