#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, m, i, k, parteners = 0;
    cin >> n;
    int* boys = new int[n];
    for (i = 0; i < n; i++) {
        cin >> boys[i];
    }
    cin >> m;
    int* girls = new int[m];

    for (k = 0; k < m; k++) {
        cin >> girls[k];
    }
    sort(boys, boys + n);
    sort(girls, girls + m);
    i = 0, k = 0;
    while (i < n && k < m) {
        if (abs(boys[i] - girls[k]) <= 1) {
            parteners++;
            k++;
            i++;
        }
        else if (boys[i] < girls[k]) {
            i++;
        }
        else {
            k++;
        }
    }
    cout << parteners;
      
    return 0;
}
