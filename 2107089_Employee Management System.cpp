//employee management system
#include <iostream>
#include<string>
using namespace std;
class employee
{
    int ID;
    string name;
    string position;
    float salary;
public:
    //default constructor
    employee()
    {

    }
    friend class EmployeeManager;
    //parameterized constructor
    employee(int i,string n,string p,float s)
    {
        ID=i;
        name=n;
        position=p;
        salary=s;
    cout<<"Employee ID :"<<ID<<endl;
    cout<<"Employee name :"<<name<<endl;
    cout<<"Employee position :"<<position<<endl;
    cout<<"Employee salary :"<<salary<<endl;
    cout<<"\n"<<endl;
}


    void display();
    //destructor
      ~employee()
    {

    }

};
void employee :: display()
{
    cout<<"Employee ID :"<<ID<<endl;
    cout<<"Employee name :"<<name<<endl;
    cout<<"Employee position :"<<position<<endl;
    cout<<"Employee salary :"<<salary<<endl;
    cout<<"\n"<<endl;

}
class EmployeeManager
{ private:
  employee member[100];
  int total=0;
  float salary_total=30000.00;
  int i,iD,j=0;
  string Position;
    public:
    friend void promoteEmployee(EmployeeManager aa,int iD);
    void add_employee()
           {
    cout<<"\nEnter Employee ID :"<<endl;
    cin>>member[total].ID;
    cout<<"Enter Employee name :"<<endl;
    cin>>member[total].name;
    cout<<"Enter Employee position :"<<endl;
    cin>>member[total].position;
    cout<<"Enter Employee salary :"<<endl;
    cin>>member[total].salary;
    salary_total=salary_total+member[total].salary;
    total++;
    }
    void total_employee()
    {
        cout<<"\n\nTotal Employee="<<total+1<<endl;
    }
      void total_salary()
    {
        cout<<"\n\nTotal salary of all employees="<<salary_total<<endl;
    }
    void show()
    {
        for(i=0;i<total;i++)
        {
            member[i].display();
        }
    }
    void promoteEmployee()
    {
        cout<<"\n\nEnter employee ID "<<endl;
        cin>>iD;
        for(i=0;i<100;i++)
        {
            if(member[i].ID==iD)
            {
                cout<<"Employee has been found\n\n"<<endl;
                cout<<"Enter the new position\n"<<endl;
                cin>>Position;
                member[i].position=Position;
                iD=1;
                j++;
                break;
            }

        }
        if(j==0)
        {
            cout<<"Invalid Employee"<<endl;
        }
    }

};
 void promoteEmployee(EmployeeManager aa,int iD)
 {
     if(iD==1)
     cout<<"\n\nEmployee has been promoted\n\n"<<endl;
 }


int main()
{
    char ch;
    EmployeeManager aa;
    employee bb;
    cout<<"Welcome to the company \n\nI,Manager Anika present here to help you\n\n"<<endl;
    cout<<"Do you want to add new employee?"<<endl;
    cout<<"\nIf yes then press Y else press N\n"<<endl;
    cin>>ch;
    while(ch=='Y')
    {
        aa.add_employee();
        cout<<"\n\nDo you want to add new employee?"<<endl;
        cout<<"\nIf yes then press Y else press N\n"<<endl;
        cin>>ch;
    }
    cout<<"Do you want to see all the records of the employee?\nIf yes then press Y"<<endl;
       cin>>ch;
       if(ch=='Y')
       {
            employee a(21001,"Anika","Accountant",30000.00);
            aa.show();
       }
       cout<<"Do you want to see total number of the employee?\nIf yes then press Y"<<endl;
       cin>>ch;
       if(ch=='Y')
       {
           aa.total_employee();
       }
        cout<<"Do you want to see total salary of all the employee?\nIf yes then press Y"<<endl;
       cin>>ch;
       if(ch=='Y')
       {
           aa.total_salary();
       }

        cout<<"\n\nDo you want to promote any employee?\n\nIf yes press press Y\n"<<endl;
        cin>>ch;
       if(ch=='Y')
       {
            aa.promoteEmployee();
            promoteEmployee(aa,1);
       }
       cout<<"Do you want to see all the records of the employee after changes?\nIf yes then press Y"<<endl;
       cin>>ch;
       if(ch=='Y')
       {
            employee a(21001,"Anika","Accountant",30000.00);
            aa.show();
       }


    cout<<"\n\nThank You"<<endl;
    return 0;
}
