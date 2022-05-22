#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x%2==0){
	        if(x%4==0){
	            cout<<"north"<<endl;
	        }
	        else{
	            cout<<"south"<<endl;
	        }
	    }
	    else{
	        if((x-1)%4==0){
	            cout<<"east"<<endl;
	        }
	        else{
	            cout<<"west"<<endl;
	        }
	    }
	}
	return 0;
}
