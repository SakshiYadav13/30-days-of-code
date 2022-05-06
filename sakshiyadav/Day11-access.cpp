#include <iostream>
using namespace std;
class G{
    public:
    string name;
    int id;
    void printid();
    void printname(){
    cout<<"Name is : "<<name<<endl;

    }
};
void G :: printid(){
    cout<<id;
}
int main(){
    G obj;
    obj.name = "Sakshi";
    obj.id = 12;
    obj.printname();
    obj.printid();
    return 0;
}
