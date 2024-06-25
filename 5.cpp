/*
    Lab 4
    Additional Components of a Class
    5.  Write a program that illustrates the following relationship:
        a. const_object.non_const_mem_function
        b. const_object.const_mem_function
        c. non_const_object.non_const_mem_function
        d. non_const_object.const_mem_function
*/
#include<iostream>
using namespace std;
class Operation{
    private:
        int num;
    public:
    //constructor
        Operation(int n) : num{n} {}
    //non constant member function
        void increment(int inc){
            num+=inc;
        }
        int multiply(int m)const{
            return m*num;
        }
        void displayValue(){
            cout<<num<<endl;
        }
};
int main(){
    //non_const_object.non_const_mem_function
    Operation a(5);
    a.increment(2);
    a.displayValue();//now a =7

    //const_object.non_const_mem_function
    const Operation b(5);
    // b.increment(2); //isn't modifiable

    //non_const_object.const_mem_function
    cout<<a.multiply(5)<<endl;//shows 35

    //const_object.const_mem_function
    cout<<b.multiply(5); //shows 25
}