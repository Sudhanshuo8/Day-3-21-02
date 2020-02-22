#include<iostream>

using namespace std;

class Demo
{
	int a,b;
	
	public:
		void displayA();
		void displayB();
		Demo();
	  
};

     void Demo::displayA()
	       {
             cout<<a;
		   }
	void Demo::displayB()
	       {
	         	cout<<b;
		   }
	Demo::Demo()
	       {
	       	cout<<"Enter a and b";
	       	cin>>a>>b;
				  }	   	   
		   
	int main()
	      {
		   Demo d1;
		   d1.displayA();
		   Demo d2;
		   d2.displayB();
		  // Demo d3;
		  // d3.displayA();
		 //  d3.displayB();
		   
		   
		   return 0;
		   
		
		   }	   
