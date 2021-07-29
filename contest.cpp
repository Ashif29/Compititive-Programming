#include<bits/stdc++.h>
using namespace std;
int cnt,cnt2;

map<int,string>mp;
map<int,bool>mp1;

class Employee{
public:
    int id,salary,age,Experience;
    string name;
    Employee(){ };
    Employee(int id,int salary,int age,int Experience,string name){
        this->id = id;
        this->salary = salary;
        this->age = age;
        this->Experience = Experience;
        this->name = name;
    }

    void set(int i,int s,int ag,int Exp,string n){
        id = i;
        salary = s;
        age = ag;
        Experience = Exp;
        name = n;
    }

    void print(){
        cout<<"Employee ID:    "<<id<<endl;
        cout<<"Employee Name:  "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
        cout<<"Employee age: "<<age<<endl;
        cout<<"Employee Experience: "<<Experience<<endl;
    }
    void AddEmployee();
    friend void Display(Employee ob[]);
};


ostream& operator << (ostream& stream, Employee &ob){
    stream<<"\tEmployee ID:    "<<ob.id<<endl;
    stream<<"\tEmployee Name:  "<<ob.name<<endl;
    stream<<"\tEmployee Salary: "<<ob.salary<<endl;
    stream<<"\tEmployee age: "<<ob.age<<endl;
    stream<<"\tEmployee Experience: "<<ob.Experience<<endl;
    return stream;
}



istream& operator >>(istream &stream, Employee &ob){
    cout<<"Enter Employee id: ";
    stream>>ob.id;

    cout<<"Enter Employee Name: ";
    stream>>ob.name;


    cout<<"Enter Employee Salary: ";
    stream>>ob.salary;

    cout<<"Enter Employee age: ";
    stream>>ob.age;

    cout<<"Enter Employee Experience: ";
    stream>>ob.Experience;
    return stream;
}



class Leave {
public:
    int days,EID;
    string occur,Name;

    void AddLeave();
    void Lset(int d,int eid,string occ,string name){
        days = d;
        EID = eid;
        occur = occ;
        Name = name;
    }
    friend void LeavePrint(Leave ob[]);
};


void LeavePrint(Leave ob[]){
    cout<<"\n\t\t Leaving Member: "<<endl;

    for(int i=0;i<cnt2;i++){
        cout<<"\n\n\t\tLeaving Memeber Id: "<<ob[i].EID<<endl;
        cout<<"\t\tLeaving Memeber Name: "<<ob[i].Name<<endl;
        cout<<"\t\tLeaving Memeber Occur: "<<ob[i].occur<<endl;
        cout<<"\t\tLeaving Memeber Days: "<<ob[i].days<<endl;
    }
}

void Leave::AddLeave(){
    int id,ch,ck = 0;
    string str,na;

    while(1){
        if(ck==1)
            break;
        cout<<"Enter your Employee id: ";
        cin>>id;
        if(mp1[id]==1)
            ck = 1;
        else
            cout<<"\t\tOpps!!! please insert valid ID."<<endl;
    }

    cout<<"\n\t\t[1] To Casual: "<<endl;
    cout<<"\t\t[2] To Sick: "<<endl;
    cout<<"\t\t[3] To Parental: "<<endl;
    cout<<"\t\t[4] To Study: "<<endl;
    while(1){
        cout<<"Enter your Choice: ";
        cin>>ch;
        if(ch<5){
            if(ch==1)
                str = "Casual Problem";
            else if(ch==2)
                str = "Sick Problem.";
            else if(ch==3)
                str = "Parental Problem.";
            else
                str = "Study Problem.";
            break;
        }
        else
            cout<<"\n\t\tPlease Invert valid choice."<<endl;
    }
       na = mp[id];
        cout<<"Enter how many Days Do you want? ";
        cin>>days;
        Lset(days,id,str,na);


};



void Display(Employee ob[]){
    cout<<"\n\t\t==================================="<<endl;
    cout<<"\t\t\t LIST OF Employee"<<endl;
    cout<<"\t\t==================================="<<endl<<endl;
    for(int i=0;i<cnt;i++){
        cout<<"\n\n\tEmployee ID:    "<<ob[i].id<<endl;
        cout<<"\tEmployee Name:  "<<ob[i].name<<endl;
        cout<<"\tEmployee Salary: "<<ob[i].salary<<endl;
        cout<<"\tEmployee age: "<<ob[i].age<<endl;
        cout<<"\tEmployee Experience: "<<ob[i].Experience<<endl;
    }
}


void Employee::AddEmployee(){
    int id, salary, age, Experience;
    string name;

    cout<<"Enter Employee id: ";
    cin>>id;
    mp1[id] = 1;

    cout<<"Enter Employee Name: ";
    cin>>name;

    mp[id] = name;

    cout<<"Enter Employee Salary: ";
    cin>>salary;

    cout<<"Enter Employee age: ";
    cin>>age;

    cout<<"Enter Employee Experience: ";
    cin>>Experience;

    set(id,salary,age,Experience,name);
}



int main()
{

    int ch;
    Employee eob[1000],ob;
    Leave lob[1000];

    while(1){
        cout<<"\n\n\t\t***Welcome to Leave Management System******"<<endl<<endl;
        cout<<"\t\t\t\t MAIN MANU"<<endl;
        cout<<"\t\t=============================================="<<endl;
        cout<<"\t\t [1] Add a new Employee"<<endl;
        cout<<"\t\t [2] Modify Employee"<<endl;
        cout<<"\t\t [3] Display Employee"<<endl;
        cout<<"\t\t [4] AddLeave()"<<endl;
        cout<<"\t\t [5] Leave Member. "<<endl;
        cout<<"\t\t [0] Exit"<<endl;
        cout<<"\t\t====================================="<<endl;

        cout<<"\nEnter your choice: ";
        cin>>ch;

        switch(ch){
        case 1:
            eob[cnt++].AddEmployee();
            break;
        case 2:
          //  print(sob);
            break;
        case 3:
            Display(eob);
            break;
        case 4:
            lob[cnt2++].AddLeave();
            break;
        case 5:
            LeavePrint(lob);
            break;
        case 0:
            return 0;
        default:
            cout<<"Opps!! Please enter the right choice."<<endl;
        }
    }
    return 0;
}
