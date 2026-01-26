#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    public:
    Person(string n){
        name=n;
    }

};
class Employee: public Person{
    protected:
    int id;
    public:
    Employee(string n, int i):Person(n){
        id=i;
    }

};
class Manager: public Employee{
    double salary;
    public:
    Manager(string n, int i, double s):Employee(n,i){
        salary=s;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

};
int main(){
    Manager m("Anjali", 101, 75000);
    m.display();
    return 0;

}