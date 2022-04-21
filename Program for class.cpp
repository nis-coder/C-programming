#include<iostream>
using namespace std;
class addition
{
	public:
		int a,b,c;
		void add()
		{
			c=a+b;
			cout<<"c="<<c;
		}
};
int main()
{
	addition a1;
	a1.a=10;
	a1.b=20;
	a1.add();
}
