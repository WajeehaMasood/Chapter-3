#include<iostream>
#include<string>
#include"3.15_edit.cpp"
using namespace std;
int main()
{
	string fn,ln;
	int d,m,y;
cout<< "Please Enter your First Name \n";
cin>> fn;
cout<< "Please Enter your last Name \n";
cin>> ln;
cout<< "Please Enter your Day of DOB \n";
cin>> d;
cout<< "Please Enter your month of DOB\n";
cin>> m;
cout<< "Please Enter your year of DOB \n";

cin>> y;
    heartrates hr( fn,ln,d,m, y); // values go to the constructor 
    return 0;
}

