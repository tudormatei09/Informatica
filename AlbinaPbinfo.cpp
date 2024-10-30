#include <iostream>

using namespace std;

int main(){
    long long int n, s = 1;
    cin >> n;
    for(int i = 1; i < n; i++){
        s = s + (i * 6);
    }
    cout << s;
    return 0;
}
