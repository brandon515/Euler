#include <iostream>
using namespace std;

int nextFib()
{
    static int fir;
    static int sec;
    if(sec == 0)
        sec = 1;
    sec += fir;
    fir = sec-fir;
    return sec;
}

int main()
{
    int res = 0;
    while(res <= 4000000)
    {
        int tmp = nextFib();
        if(tmp%2==0)
            res +=tmp;
    }
    cout << res;
    return 0;
}
