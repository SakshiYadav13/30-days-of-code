#include<iostream>
using namespace std;
class add{
    public:
    int a,b;
    add(){
        a=10;
        b=20;
    }
};
int main(){
    add ad;
    cout<<"a+b = "<<ad.a+ad.b<<endl;
    return 0;
}
