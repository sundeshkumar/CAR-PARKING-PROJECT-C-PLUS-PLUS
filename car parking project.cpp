#include<iostream>
using namespace std;

int main ()
{
	int r=0;
	int c=0;
	int b=0;
	int number;
	int amount=0, count=0;
	//menu
	while(true)
	{
	cout<<"press number 1 for rickshaw"<<endl;
	cout<<"press number 2 for cars"<<endl;
	cout<<"press number 3 for bus"<<endl;
	cout<<"press number 4 to show the record "<<endl;
	cout<<"press number 5 to delete the record "<<endl;
	
	cin>>number;
	
	if(number==1)
		{
		r++;
		amount=amount+100;
		count=count+1;
	    }
	
	  if (number==2)
		{
		c++;
	
		amount=amount+200;
		count=count+1;
	    }

	
	

	 if(number==3)
		{
		b++;
		amount=amount+300;
		count=count+1;
	    }
	
	
	 if(number==4)
	{
	
	cout<<"the total amount is="<<amount<<endl;
	
	cout<<"the total number of vehicles parked is ="<<count<<endl;
	
	cout<<"the total number of riskshaw parked is ="<<r<<endl;
	
		cout<<"the total number of cars parked is ="<<c<<endl;
		
		cout<<"the total number of buses parked is ="<<b<<endl;
		
		cout<<"*****************************************************"<<endl;
	}
	
	 if(number==5)
	{
		cout<<"the total amount is="<<0<<endl;
       	cout<<"the total number of vehicles parked is ="<<0<<endl;
		cout<<"the total number of riskshaw parked is ="<<0<<endl;
		cout<<"the total number of cars parked is ="<<0<<endl;
		cout<<"the total number of buses parked is ="<<0<<endl;
		
		
		
		cout<<"*********************************************************"<<endl;
		
		cout<<"record was delete"<<endl;
		
		
		cout<<"*******************************************************"<<endl;
     }
   
   
   }
     system("PAUSE");
     
     return 0;
  }
  

  
