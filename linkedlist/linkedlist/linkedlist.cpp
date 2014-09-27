// linkedlist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "conio.h"


class data
{
public:
	int num;
	data *next;
}
;
data *start, *second;
void adddata(data *first);
void disp();
void deletedata (int n);
void addinbetween(data *first);
int i=100;


void myfunc(int a, double b)
{
	a=5;
}

void myfunc(double a, int b)
{
	a=6;
}

int _tmain(int argc, _TCHAR* argv[])
{

	int c1;
	long c2;
	myfunc(4.4,4);

	start = NULL;

	data *first;
	for (int i=0;i<10;i++)
	{
	first = new data();
	first->next = NULL;
	first->num = i;
	adddata(first);
}
	disp();
	
	deletedata(3);
	disp();
		deletedata(1);
			disp();
			first = new data();
	first->next = NULL;
	first->num = 666;
			addinbetween(first);
			disp();
	getch();
	return 0;
}

void adddata(data *first)
{
	 if (start == NULL)
	 {
		 start =first;
		 second==NULL;
	 }
	 else
	 {
		second =start;
		{
		 while (second->next != NULL)
		 {
			 second = second->next;

		 
		 }
		  second->next = first;
		}// first->next = NULL;
		}
		
	 

	 int i;

}
void disp()
{

	

	

		second =start;
		
		 while (second->next != NULL)
		 {
			 second = second->next;
			 printf("%d\n",second->num);		 
		 }
		 i++;
 printf("%d\n",i);	
	

}

void deletedata(int n)
{

	data *prev;
	second =start;
		
		 while (second->next != NULL)
		 {
			prev = second;
			 second = second->next;
			 if (second->num == n)
			 {

				 prev->next=second->next;
			//	 delete second;
				 second=prev->next;
				 break;

			 }

		 
		 }


}


void addinbetween(data *first)
{
	second = start;
	data *prev;
	while(second->next !=NULL)
	{
	
		second=second->next;

		if(second->num == 6)
		{
				//prev = second;
				first->next = second->next;
				second->next = first;

			break;
		}
	}

}