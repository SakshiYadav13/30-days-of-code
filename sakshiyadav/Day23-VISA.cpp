#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x1,x2,y1,y2,z1,z2;
	    cin>>x1>>x2>>y1>>y2>>z1>>z2;
	    if((x1<=x2) && (y1<=y2) && (z1>=z2)){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
