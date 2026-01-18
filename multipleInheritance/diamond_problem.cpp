#include<iostream>
using namespace std;
class A{
    public:
    int x;
};
class B:public A{

};
class C: public A{

};
class D: public B,public C{

};
int main(){
    D obj;
    //obj.x=10; // This will cause ambiguity because D has two copies of A's members
    obj.B::x=10; // Resolving ambiguity by specifying the path through B
    obj.C::x=20; // Resolving ambiguity by specifying the path through C
    cout<<"Value of x through B: "<<obj.B::x<<endl;
    cout<<"Value of x through C: "<<obj.C::x<<endl;
    return 0;
}
