#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int n;
	cin>>n;
	int count=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(i*j<=n)
			count++;
		}
	}
	cout<<count;

	return 0;
}
