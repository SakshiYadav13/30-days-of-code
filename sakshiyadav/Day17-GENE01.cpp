#include <iostream>
using namespace std;

int main() {
	char x,y;
	cin>>x>>y;
	char R,B,G;
	
	if((x=='R' && y=='B') || (x=='B' && y=='R')) {
	    cout<<"R"<<endl;
	}
	
	else if((x=='B' and y=='G') || (x=='G' and y=='B')){
	    cout<<"B"<<endl;
	}

	else if((x=='R' and y=='G') || (x=='G' and y=='R')){
	    cout<<"R"<<endl;
	}
	else if(x=='B' and y=='B'){
	    cout<<"B"<<endl;
	}
	else if(x=='R' and y=='R'){
	    cout<<"R"<<endl;
	}
	
	else{
	    cout<<"G"<<endl;
	}
	
}	
