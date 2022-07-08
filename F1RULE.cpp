/*Miami GP*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a;
	    int b;
	    cin>>a>>b;
	    float p=0;
	    p=(a*107)/100;
	    if(b<=p )
	    {
	       cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
