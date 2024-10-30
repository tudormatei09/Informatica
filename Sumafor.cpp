#include <iostream>

using namespace std;

int main()
{
    int n, x, i = 1, s = 0;
    cin >> n;
    for(i = 1; i <= n; i++){
        cin >> x;
        s = s + x;
    }
    cout << s;
    return 0;
}
