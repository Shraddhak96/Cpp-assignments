//6) write a function to swap 2 given numbers using pointers.
/*
#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void main()
{
	int a,b;
	cout<<"enter numbers to swap"<<endl;
	cin>>a>>b;
	swap(&a,&b);
	cout<<a<<"\t"<<b;
}
*/

/* Call By Reference */

/*
#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void main()
{
	int a,b;
	cout<<"enter numbers to swap"<<endl;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<"\t"<<b;
}

*/