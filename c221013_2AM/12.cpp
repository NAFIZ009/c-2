#include<iostream>


using namespace std;


class Employee
{
	double salary;
	int no_of_hours;
public:
	Employee() {}
	void getinfo()
	{
		cout << "Please, enter the salary of employee: ";
		cin >> salary;
		cout << "Please, enter the number of hours: ";
		cin >> no_of_hours;
	}
	void AddSal()
	{
		if (salary < 500)
			salary += 10;
	}
	void AddWork()
	{
		if (no_of_hours > 6)
			salary += 5;
	}
	void DisplaySalary()
	{
		cout << salary;
	}


};


int main()
{
    Employee e1;
    e1.getinfo();
    e1.AddSal();
    e1.AddWork();
    cout<<"Salary is: "<<endl;
    e1.DisplaySalary();
    return 0;

}
