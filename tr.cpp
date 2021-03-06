#include <iostream>

using namespace std;
int main()
{
    int num;
    cin >> num;
    unsigned long long int i = 1, bin = 0;
    while (num > 0)
    {
        bin += (num % 2) * i;
        num = num / 2;
        i *= 10;
    }
    cout << bin;
    return 0;
}