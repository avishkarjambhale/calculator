#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;
class calculator
{
	private:
	void calculate()
	{
		char a=' ';
		int m,n,total=0,temp=0;
		cout<<"enter symbols {'+','-','*','/','%'} for the necessary operation and at end insert '#' or '0' to exit"<<endl;
		Sleep(3000);
		system("cls");
		cout<<"perform the operation!!"<<endl;
		Sleep(2000);
		system("cls");

		while(a)
		{
		cin>>m;
		cin>>a;
		if(a=='#'||a=='0')
		break;
		cin>>n;
		if(a=='+')
		{
			temp=m+n;
			total=total+temp;
			temp=0;
			cout<<"= "<<total<<endl;
		}
		else if(a=='-')
		{
			temp=m-n;
			total=total+temp;
			temp=0;
			cout<<"= "<<total<<endl;
		}
		else if(a=='*')
		{
			temp=m*n;
			total=total+temp;
			temp=0;
			cout<<"= "<<total<<endl;
		}
		else if(a=='/')
		{
			temp=m/n;
			total=total+temp;
			temp=0;
			cout<<"= "<<total<<endl;
		}
		else if(a=='%')
		{
			temp=m%n;
			total=total+temp;
			temp=0;
			cout<<"= "<<total<<endl;
		}
		}
		cout<<"total is "<<total<<endl;
	}
	public:
	void display()
	{
		cout<<"Welcome"<<endl;
		Sleep(1000);
		system("cls");
		calculate();
		Sleep(4000);
		cout<<"thank you"<<endl;
	}
};
int main()
{
	calculator c;
	c.display();
}
