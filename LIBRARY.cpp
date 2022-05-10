#include<iostream>
#include<stdio.h>
using namespace std;
class library
{
	public:
		char bkname[100];
		float bkprice,famnt;
		int days;
		
		void input()
		{
			cout<<"\n ENTER BOOK NAME : ";
			fflush(stdin);
			gets(bkname);
			cout<<"\n ENTER BOOK PRICE : ";
			cin>>bkprice;
			cout<<"\n ENTER DAYS : ";
			cin>>days;
		}
		void calculate()
		{
			if(days<=7)
			{
				famnt=days*1;
			}
			else if(days<=15)
			{
				famnt=1+((days-7)*1.50);
			}
			else if(days<=30)
			{
				famnt=2.50+((days-15)*2.60);
			}
			else
			{
				famnt=4.50+((days-30)*3.80);
			}
			cout<<"\n TOTAL FINE TO PAID : "<<famnt;
		}
		void display()
		{
			cout<<"\n*************************************************************\n";
			cout<<"\nBOOK NAME\t\tBOOK PRICE\t\tFINE TO PAID\n";
			cout<<"\n*************************************************************\n";
			cout<<"\n"<<bkname<<"\t\t"<<bkprice<<"\t\t\t"<<famnt<<endl;
			}	
};

int main()
{
	library l;
	l.input();
	l.calculate();
	l.display();
}
