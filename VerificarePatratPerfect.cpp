#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rad = sqrt(n);
    if(n == rad * rad)
        cout << "da";
    if(n != rad * rad)
        cout << "nu";

    return 0;
}
