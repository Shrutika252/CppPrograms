#include<iostream>
using namespace std;
int main()
{
int age=0;
std::cout<<"Enter your age : "<<endl;
std::cin>>age;
if(age>=18)
{
	std::cout<<"You are eligible for voting";
}
else
{
std::cout<<"You are not eligible for voting";	
}
return 0;
}
