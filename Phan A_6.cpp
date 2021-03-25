#include <iostream>
using namespace std;
int i;
void f_(int n)
{
    int f[100];
    i++;
    cout << i << endl;
    f_(n);
}
int main()
{
    i = 0;
    int n;
    cin >> n;
    f_(n);
    return 0;
}
// Với mảng f khai báo khoảng 100 phần tử, sau 1648 tầng thì bị tràn