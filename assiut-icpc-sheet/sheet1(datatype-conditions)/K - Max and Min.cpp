
#include <iostream>
using namespace std;
int main()
{
    int a, b, c ;
    cin >> a >> b >> c ;
    int max, min;
    if (a >= b && a >= c) {
        max = a;
        if (c > b)
            min = b;
        else
            min = c;
    } else if (b >= a && b >= c) {
        max = b;
        if (a > c)
            min = c;
        else
            min = a;
    } else {
        max = c;
        if (a > b)
            min = b;
        else
            min = a;
    }
    cout << min << " " << max;
    return 0;
}          