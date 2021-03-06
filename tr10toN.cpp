#include <iostream>

using namespace std;
char numbers (int num)
{
    char out[] = {'0','1','2','3','4','5','6','7','8','9',
    'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
    'Q','R','S','T','U','V','W','X','Y','Z'};
    return out[num];
}

void bases (int num, int base)
{
    if (num < base)
    {
        cout << numbers(num);
        return;
    }
    bases(num/base , base);
    cout << numbers(num % base);
}

int main(int num, int base)
{
    cin >> num >> base;
    bases(num,base);
    return 0;
}