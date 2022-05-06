#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, a, b;
    cout << "enter two no.s , to print all the prime no.s between them" << endl;
    cin >> a >> b;
    for (n = a; n <= b; n++)
    {
        for (i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i == n)
        {
            cout << "prime no.s are"  << endl;
            cout<<n<<endl;
        }
    }
    return 0;
}
