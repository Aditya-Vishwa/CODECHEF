#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a;
	    int b;
	    cin>>a>>b;
	    if(a>0 and b>0 and a==b)
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
