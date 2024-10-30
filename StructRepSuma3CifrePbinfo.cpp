#include <iostream>
using namespace std;
int main(){
    int n, s = 0;
    while(cin >> n and n != 0){
        if(n >= 100 and n <= 999){
            if(n / 100 == n % 10){
                s = s + n;
            }
        }
    }
    cout << s;
    return 0;
}
