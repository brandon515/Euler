#include <iostream>
using namespace std;

int main()
{
    int64_t sumSquare=0, squareSum=0;
    for(int i = 1; i <= 100; i++)
    {
        sumSquare += (i*i);
        squareSum += i;
    }
    squareSum = squareSum * squareSum;
    cout << (squareSum-sumSquare);
    return 0;
}
