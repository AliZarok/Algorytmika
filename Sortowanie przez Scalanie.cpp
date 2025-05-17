#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r) {
    int t[100], i = l, j = m + 1, k = 0;
    while (i <= m && j <= r)
        t[k++] = (a[i] < a[j]) ? a[i++] : a[j++];
    while (i <= m) t[k++] = a[i++];
    while (j <= r) t[k++] = a[j++];
    for (i = 0; i < k; ++i) a[l + i] = t[i];
}

void sort(int a[], int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    sort(a, l, m);
    sort(a, m + 1, r);
    merge(a, l, m, r);
}

int main() {
    int a[] = {4, 1, 7, 3, 2}, n = 5;
    sort(a, 0, n - 1);
    for (int i = 0; i < n; ++i) cout << a[i] << " ";
}
