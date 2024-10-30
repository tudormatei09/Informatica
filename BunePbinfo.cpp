#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int amin = 1000000;
    int amax = 0;
    int bmin = 1000000;
    int bmax = 0;
    while(a > 0){
        if(a % 10 > amax) amax = a % 10;
        if(a % 10 < amin) amin=a % 10;
        a = a /10;

    }
        while(b > 0){
            if(b % 10 > bmax) bmax = b % 10;
            if(b % 10 < bmin) bmin=b % 10;
            b = b / 10;
        }
        if(amax == bmin){
            cout << bmin;
            return 0;
        }
        if(amin == bmax){
            cout << bmax;
            return 0;
        }
        cout << "NU";



    return 0;
}
