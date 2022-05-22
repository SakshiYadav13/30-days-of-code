#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,x1,y1,d;
	    cin>>x>>y>>x1>>y1>>d;
	    int m= x/x1;
	    int n= y/y1;
	    int k= min(m,n);
	    if(k>=d){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
