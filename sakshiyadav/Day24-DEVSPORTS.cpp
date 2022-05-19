#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int z,y,a,b,c,x,e;
	while(t--){
	    
	    cin>>z>>y>>a>>b>>c;
	    x=z-y;
	    e=a+b+c;
	    if(e<=x){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    
	    
	}
	return 0;
}
