#include <iostream>
using namespace std;
long A(int n) {
 if (n == 0) return 0;
 if (n == 1) return 1;
 return A(n-1) + A(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << A(n) << endl;
    int k[1000];
    k[1] = 1;
    k[2] = 1;
    for (int i = 3;i <= n;i++) k[i] = k[i - 1] + k[i - 2];
    cout << k[n];
    return 0;
}
