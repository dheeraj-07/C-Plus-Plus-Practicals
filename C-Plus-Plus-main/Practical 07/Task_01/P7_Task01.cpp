#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter a number : ";
cin>>n;
switch(n)
{
case 1: cout<<"Current Year = 2021"<<endl;
		break;
case 2: cout<<"Current Month = October"<<endl;
		break;
case 3: cout<<"Current Date = 13"<<endl;
		break;
case 4: cout<<"Full Date = 13 October, 2021"<<endl;
		break;
default : cout<<"Not Applicable"<<endl;
}
}
