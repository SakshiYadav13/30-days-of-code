#include <iostream>
using namespace std;

int main() {
	    int t;
	    cin>>t;
	    while(t--){
	
	    int a,b;
	    cin>>a>>b;
	    int s;
	    s=a+b;
	    if (s<3){
	        cout<<"1"<<endl;
	    }
	    else if  (s>=3 && s<=10){
	        cout<<"2"<<endl;
	    }
	    else if (s>=11 && s<=60){
	        cout<<"3"<<endl;
	    }
	    else{
	        cout<<"4"<<endl;
	    }
	
	    }
}
