#include <iostream>
using namespace std;
int main()
{
    int arr[5][5], i, k, count = 0, rows, cols;
    for (i = 0; i < 5; i++) {
        for (k = 0; k < 5; k++) {
            cin >> arr[i][k];
            if (arr[i][k] == 1) {
                rows = i;
                cols = k;
            }
        }
    }
    while (rows != 2) {
        if (rows > 2) {
            rows--;
            count++;
        }
        else {
            rows++;
            count++;
        }
    }
    while (cols != 2) {
        if (cols > 2) {
            cols--;
            count++;
        }
        else {
            cols++;
            count++;
        }
    }
    cout << count;
    return 0;
}
