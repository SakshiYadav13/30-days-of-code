#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n,k;
	    cin>>m>>n>>k;
	    if(m>(n*k)){
	        cout<<"yes"<<"\n";
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
}
