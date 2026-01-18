#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"Showing from class A"<<endl;
    }
};
class B{
    public:
    void show(){
        cout<<"Showing from class B"<<endl;
    }
};
class C: public A,public B{

};
int main(){
    C obj;
    //obj.show(); // This will cause ambiguity
    obj.A::show(); // Resolving ambiguity by specifying the class
    obj.B::show(); // Resolving ambiguity by specifying the class
    return 0;
}