#include <iostream>

using namespace std;

int main()
{
    int n, x, i = 1;
    cin >> n;
    for(i = 1; i <= n; i++){
        cin >> x;
        if(x % 2 == 0){
            cout << x;
            return 0;
        }
    }
    cout << "IMPOSIBIL";
    return 0;
}
