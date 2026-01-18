#include<iostream>
using namespace std;
class A{
    public:
    void showA(){
        cout<<"Class A function "<<endl;
    }

};
class B{
    public:
    void showB(){
    cout<<"Class B function "<<endl;
    }
};
class C: public A,public B{

};
int main(){
    C obj;
    obj.showA();
    obj.showB();
    return 0;
}
