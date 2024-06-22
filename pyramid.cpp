#include<iostream>
using namespace std;
int main()
{
	int n, n1=0, n2=1, n3=0, s=0;
	cout<<"enter the number:";
	cin>>n;
	cout<<s+n2;
	for(int i=3;i<=n;i++)
	{
		n3=n1+n2;
		if(i%2==0)
		s=s+n3;
		n1=n2;
		n2=n3;
	}
	cout<<" "<<s;
	return 0;
}
