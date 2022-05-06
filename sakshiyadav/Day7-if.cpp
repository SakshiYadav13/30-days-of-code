#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value for a , b and c \n";

    cin>> a>> b>> c;
    cout<<"so the entered no.s are : "<<a<<" "<<b<<" "<<c<< endl;
    if (a>b && a>b)
    {
        cout<<"greatest no. is in a\n";

    }
    if(b>a && b>c)
    {
        cout<<"greatest no. is in b \n";
    }
    if(c>a && c>b)
    {
        cout<<"greatest no. is in c \n";
    }
    
    

    return 0;
}
