#include <iomanip>
#include <iostream> 
using namespace std;
class time{
	public:
	int hr,min,sec,TotalSeconds;
	void get();
	void convert();
	void seconds();
	
};


void time::get()
	{
		std::cout<<"Enter Time...";
		std::cout<<endl;
		std::cout<<"Hours?";
		std::cin>>hr;
		std::cout<<endl;
		std::cout<<"Minutes?";
		std::cin>>min;
		std::cout<<endl;
		std::cout<<"Seconds?";
		std::cin>>sec;	
}	
	void time::convert()
	{
		if(hr<=12&&min<=59&&sec<=59)
		{
			std::cout<<"Time is = " <<setw(2)<< setfill('0') << hr<< ":"<<setw(2) <<setfill('0') << min<< ":"<<setw(2)<<setfill('0') << sec <<endl;
		}
	}
	
	void time::seconds()
	{
	
		TotalSeconds=hr*3600+min*60+sec;
		std::cout<<"Total Seconds:"<<TotalSeconds<<endl;
	}	

int main()
{
 time t;
 t.get();
 t.convert();
 t.seconds();	
 	return 0;
}
  
