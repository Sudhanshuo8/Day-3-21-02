#include<iostream>

using namespace std;

class demo
{
	int a;
	
	public:
		void get()
		{
			cout<<"Enter the value of a"<<endl;
			cin>>a;
		}
		void show()
		{
			cout<<a;
		}
};

int main()
{
	demo d;
	d.get();
	d.show();
	
	return 0;
}





