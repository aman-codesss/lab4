#include<iostream>
using namespace std;
class Test{
    private:
    int n;
    public:
    //parameterized constructor
    Test(int num): n{num}{}
    int print(){
        return n;
    }
    //default constructor
    Test(){
        cout<<"Hello";
    }
};
int main(){
    //custom constructor is called
    Test x(4);
    cout<<x.print()<<endl;
    //default contructor is called
    Test y;
}