#include <iostream>

using namespace std;
int main()
{
    int num, sist;
    cin >> num >> sist;
    if (sist == 2)
    {
        unsigned long long int i = 1, bin = 0;
        while (num > 0)
        {
            bin += (num % 2) * i;
            num = num / 2;
            i *= 10;
        }
        cout << bin;
    }
    else if (sist == 16)
    {
        cout << hex << num;
    }
    return 0;
}