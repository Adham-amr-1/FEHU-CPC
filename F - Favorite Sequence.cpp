#include <iostream>
using namespace std;
int main() {
    int t, n, i;
    cin >> t;
    while (t--) {
        cin >> n;
        int* arr = new int[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int left = 0, right = n - 1;
        while (left <= right) {
            if (left == right) {
                cout << arr[left] << " ";
            }
            else {
                cout << arr[left] << " " << arr[right] << " ";
            }
            left++;
            right--;
        }
        cout << endl;
    }
    return 0;
}
