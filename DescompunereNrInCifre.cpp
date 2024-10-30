#include <iostream>

using namespace std;

int main(){
   int x;
    cin >> x;
    while(x > 0){
        int cifra = x % 10;
        cout << cifra << " ";
        x = x / 10;
    }
    return 0;
}
