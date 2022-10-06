#include<iostream>
using namespace std;

    struct student{
        int rollno;
        string name;
        float salary;
    };

int main(void){
    // cout<<"\nhello world!"<<endl;
    struct student s1;
    s1.rollno = 12;
    s1.name ="yash";
    s1.salary = 78000;

    cout<<"the name of the student is "<<s1.name<<endl;
    cout<<"rollno of the student = "<<s1.rollno<<endl;
    cout<<"salary of the student = "<<s1.salary;
    return 0;
}