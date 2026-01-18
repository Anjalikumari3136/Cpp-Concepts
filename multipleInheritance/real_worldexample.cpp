#include<iostream>
using namespace std;
class Person{
    public:
    void identity(){
        cout<<"I am a person"<<endl;
    }

};
class Student{
    public:
    void role(){
        cout<<"I am a student"<<endl;
    }

};
class Intern: public Person,public Student{
    public:
    void work(){
        cout<<"I work as an intern"<<endl;
    }

};
int main(){
    Intern obj;
    obj.identity();
    obj.role();
    obj.work();
    return 0;
}