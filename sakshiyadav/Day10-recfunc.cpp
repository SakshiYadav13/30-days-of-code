#include <iostream>
using namespace std;
int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*fact(n-1);
}
int fib(int a)
{
    if(a<2)
    {
        return 1;
    }
    return fib(a-2)+fib(a-1);
}

int main()
{
    int num;
    cout<<"enetr the number"<<endl;
    cin>>num;
    cout<<"factorial of the entered no. is : "<<fact(num)<<endl;
   
    cout<<"the term in fibonacci series is at position : "<<fib(num);
    return 0;

}
