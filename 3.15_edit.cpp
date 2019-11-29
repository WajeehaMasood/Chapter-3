#include<iostream>
#include<string>
using namespace std;

class heartrates{
	int max_H_R;
	float fifty;
	float eighty; 
	string firstname,lastname;
    int day,month,year, age;
    public:
    heartrates(string fn,string ln, int d, int m, int y){// constuctor
    	firstname=fn;
    	lastname=ln;
    	day=d;
    	month=m;
    	year=y;
    	display();
    	Age();
    	maxheartrates();
    	targetheartbeat();
	}
	maxheartrates(){//Heart beat func
		max_H_R= 22-age;
		cout<<"Maximum heart rate is "<< max_H_R<<"\n";
	
	}
	targetheartbeat(){// target heart beat func
		fifty= max_H_R * 0.5;
		eighty =max_H_R *0.8;
		cout<< "The target range is "<< fifty<< " to "<< eighty << "\n";
	}
	getfirstname(){// Get first Name func
		cout<< "Fisrt Name is"<< firstname<<"\n";
	}
	
	getlastname(){// Get last Name func
		cout<< "last Name is"<< lastname<<"\n";
	}
	
	getday(){// Get day func
		cout<< "day is "<< day<<"\n";
	}
	
	getmonth(){// Get month func
		cout<< "month is "<< month<<"\n";
	}
	
	getyear(){// Get year func
		cout<< "year is "<< year<<"\n";
	}
	
	setfirstname(string a){// set first name func
		firstname=a;
	}
	
    setlastname(string a){// set last name func
    	lastname=a;
	}
	
	setday(int a){// set day func
		day=a;
	}
	
	setmonth(int a){// set month func
		month=a;
 }
	
	setyear(int a){// set year func
		year=a;
	}
	Age(){ //Age calculator func
		age =2019-year;
		cout<< "Your age is " << age <<"\n";
	}
	display(){
		cout<<"Your First Name is " << firstname <<"\n";
		cout<<"Your last Name is " << lastname <<"\n";
		cout<<"Your Date of Birth is " << day << "\\" << month <<"\\"<< year <<"\n";

		

	}

};
    
