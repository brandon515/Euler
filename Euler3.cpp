#include <iostream>
#include <math.h>
using namespace std;
bool isWhole(double num)
{
    uint64_t intNum = (uint64_t)num;
    double rem = num-intNum;
    return (rem==0.0f);
}
bool isPrime(uint64_t num)
{
    for(double i = 2; i < sqrt(num)+1; i++)
    {
        if(isWhole(num/i) and num != i)
            return false;
    }
    return true;
}
int getNextPrime(bool reset)
{
    static uint64_t prime;
    if(reset)
    {
        prime = 1;
        return 0;
    }
    while(!isPrime(++prime)){}
    return prime;
}
int main()
{
    uint64_t num = 600851475143;
    uint64_t total = 0;
    getNextPrime(true);
    while(true)
    {
        double i = getNextPrime(false);
        if(isWhole(num/i))
        {
            num = num/i;
            total += i;
            getNextPrime(true);
            cout << i << "\n";
            if(isPrime(num))
            {
                total+= num;
                cout << "DONE: " << num << "\n";
                break;
            }
        }
    }
    cout << total;
    return 0;
}
