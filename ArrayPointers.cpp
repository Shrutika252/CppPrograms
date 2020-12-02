#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	int i;
	int *p;
	
	std::cout<<"Enter Elements:";
	for(i=0;i<5;i++)
	{
		std::cin>>arr[i];
	}
	p=arr;
	std::cout<<"You Entered:";
	for(i=0;i<5;i++)
	{
		std::cout<<*p<<endl;
		p++;
	}
	return 0;
}
