#include <string>
#include<iostream>
using namespace std;
class Employee{
  int account_number;
    string FN,LN;
    int monthly_salary;
public:
    Employee( int a,string f,string l,int b ){
        
        account_number=a;
        FN=f;
        LN=l;
        monthly_salary=b;
    }
    void getpart(){
        cout<<"Account Number: "<<account_number<<"\nFirst Name:"<<FN<<"\nLast Name:"<<LN<<"\nMonthly salary:"<<monthly_salary;
    }
    void setpart(unsigned int a){
        account_number=a;
        }
	};
int main()
{
    Employee data(0012,"Miss","Wajeeha",70000);
    data.getpart();
    
    
    return 0;
}
