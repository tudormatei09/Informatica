#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    bool ok = true;
    while(n > 0){
        if(n % 10 > k){
            ok = false;
        }
        n = n / 10;
    }
    if(ok == true){
        cout << "DA";
    }
    if(ok == false){
        cout << "NU";
    }
    return 0;
}
