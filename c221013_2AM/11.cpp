#include <windows.h>
#include <iostream>

using namespace std;

class employee
{
	char  emp_name[20],emp_adress[50];
    int   emp_year;


	public:

		void get_emp_details();
		void show_emp_details();
};

void employee :: get_emp_details()
{
	cout<<"\nEnter employee name: ";
	cin>>emp_name;
	cout<<"\nEnter Joining Year: ";
	cin>>emp_year;
	cout<<"\nEnter employee Address: ";
	cin>>emp_adress;
}


void employee :: show_emp_details()
{
	cout<<"\n\nNAME YEAR ADRESS"<<endl;
	cout<<emp_name<<" "<<emp_year<<" "<<emp_adress;

}


int main()
{
    employee emp;

    emp.get_emp_details();
    emp.show_emp_details();

    return 0;
}
