#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int arr[10], cnt1 = 0, cnt0 = 0;
    for (int i = 1; i <= 7; i++)
    {

        cin >> arr[i];
    }
    
    for (int i = 1; i <= 7; i++)
    {
        if (arr[i] == 1)
        {
            cnt1++;
        }
        else
        {
            cnt0++;
        }
    }
    if (cnt1 > cnt0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
	}
	return 0;
}
