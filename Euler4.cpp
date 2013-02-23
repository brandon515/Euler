#include <iostream>
#include <sstream>
using namespace std;

string intToStr(int num)
{
    stringstream ss;
    ss << num;
    return ss.str();
}
int strToInt(string num)
{
    istringstream ss(num);
    int val;
    ss >> val;
    return val;
}
bool isPal(string po)
{
    if(po.length()%2 != 0)
        return false;
    string po1 = po.substr(0,po.length()/2);
    string po2 = po.substr((po.length()/2), po.length()/2);
    for(uint32_t i = 1; i < (po.length()/2)+1; i++)
    {
        if(po1[(po.length()/2)-i] != po2[i-1])
        {
            //cout << "po1: " << po1[(po.length()/2)-i] << "\npo2: " << po2[i] << "\n";
            return false;
        }
    }
    return true;
    cout << po << "\n";
}
int main()
{
    int curMax = 0;
    for(int i = 100; i < 1000; i++)
    {
        for(int j = 100; j < 1000; j++)
        {
            int num = j*i;
            if(isPal(intToStr(num)) and curMax<num)
                curMax = num;
        }
    }
    cout << curMax;
    return 0;
}
