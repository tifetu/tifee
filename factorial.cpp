#include<iostream>
using namespace std;
	int fact(int num)
	{
		int res;
		if(num==1||num==0)
	return 1;
	else 
	res=num*fact(num-1);
	return res;
	
	}
	int main()
	{
		int i,n;
	cout<<"enter the number:  ";
	cin>>n;
	i=fact(n);
	cout<<i;
	return 0;
		
	}

