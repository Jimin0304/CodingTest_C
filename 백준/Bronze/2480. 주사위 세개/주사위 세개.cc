#include <iostream>
using namespace std;

int main(void)
{
    int ft, st, tt;
    
    cin >> ft >> st >> tt;
    if ((ft == st) && (st == tt))
        cout << 10000 + ft * 1000 << endl;
    else if ((ft == st) || (st == tt) || (ft == tt)) {
        if (ft == st)
            cout << 1000 + ft * 100 << endl;
        else if (st == tt)
            cout << 1000 + st * 100 << endl;
        else
            cout << 1000 + tt * 100 << endl;       
    }
    else {
        if ((ft >= st) && (ft >= tt))
            cout << ft * 100 << endl;
        else if ((st >= ft) && (st >= tt))
            cout << st * 100 << endl;
        else
            cout << tt * 100 << endl;
    }

    return 0;
}