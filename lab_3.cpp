#include <iostream>
#include <cmath>
using namespace std;
#define pi 3.1415926536

int main() {
    double x = 0, e, a = 0, sum = 0, b = pi;
    int i = 0;
    cout << "Enter precision:\n ";
    cin >> e;

    while (x <= (b - e)) {
        x = a + (e * i);
        sum += (log(2 + sin(x)) * e);
        i += 1;
    }
    cout << "Answer: " << sum;
    return 0;
}
