//Method overloading means multiple functions with the same name but different parameter lists in the same class.
#include <iostream>
using namespace std;
class Calculator{
    public:
    //Add two integers
    int add(int a,int b){
        return a+b;
    }

    // Add three integers (overloading by number of parameters)
    int add(int a,int b,int c){
        return a+b+c;
    }

    // Add two floating point numbers (overloading by type)
    double add(double a,double b){
        return a+b;
    }

    int multiply(int a ,int b){
        return a*b;
    }

    int multiply(int a,int b,int c){
        return a*b*c;
    }
};
int main(){
    Calculator calc;
    cout<<"Addition two (int): " << calc.add(10,20)<<endl;
    cout<<"Addition three (int): " << calc.add(10,20,30)<<endl;
    cout<<"Addition (double): " << calc.add(10.5,20.5)<<endl;
    cout<<"Multiplication two (int): " << calc.multiply(10,20)<<endl;
    cout<<"Multiplication three (int): " << calc.multiply(10,20,30)<<endl;
}