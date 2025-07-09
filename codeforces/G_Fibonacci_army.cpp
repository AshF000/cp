#include <iostream>

using namespace std;

int main()
{
    long n;
    long long a = 0, b = 1;

    cin >> n;

    while (n--)
    {
        long long sum = a + b;
        a = b;
        b = sum;
        
    }
cout << sum << endl;
    return 0;
}
