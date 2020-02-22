#include<iostream>

using namespace std;

class cal
{
	int num,i;
	int fact=1;	
	public:
		void get();
		void show();
		void calculation();
};

	void cal::get()
		{
	      cout<<"Enter the no"<<endl;
	      cin>>num;
		}
	
	void cal::calculation()
	     {
           for(i=1;i<=num;i++)
		          {
		   	        fact=fact*i;
				  }		
		 }
		 
		void cal::show()
	         {
		       cout<<fact;
			  }	  	
		 
		 int main()
		 {
		 	cal c;
		 	c.get();
		 	c.calculation();
		 	c.show();
		 }
