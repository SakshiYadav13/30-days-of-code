#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a<b and a<c){
	        cout<<"draw"<<endl;
	    }
	    else if(b<a and b<c){
	        cout<<"bob"<<endl;
	    }
	    else{
	        cout<<"alice"<<endl;
	    }
	}
}
