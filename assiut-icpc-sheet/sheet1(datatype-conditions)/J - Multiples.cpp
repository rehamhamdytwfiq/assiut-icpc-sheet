#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x , y ;
    cin >> x >> y ;
    int big = max(x, y);
    int small = min(x, y);
    if (big == small) 
        cout<<"Multiples" ;
    else if (big % small == 0 && small % big == small) 
        cout<<"Multiples" ;
    else 
        cout<<"No Multiples" ;
    return 0;
}
 