#include <iostream>
using namespace std;

int main() {
    int k, n, count = 0, i;
    cin >> n >> k;
    int* arr = new int[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k_score = arr[k - 1];
    for (i = 0; i < n; i++) {
        if (arr[i] >= k_score && arr[i]>0) {
            count++;
        }
        else {
            break;
        }
    }
    cout << count;
    return 0;
}
