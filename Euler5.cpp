#include <iostream>
using namespace std;

int main()
{
    uint32_t num = 3;
    bool no = true;
    while(no)
    {
        for(int i = 1; i <=20; i++)
        {
            if(num%i!=0)
            {
                num++;
                no = true;
                break;
            }
            if(num%i==0)
            {
                no = false;
            }
        }
    }
    cout << num;
    return 0;
}
