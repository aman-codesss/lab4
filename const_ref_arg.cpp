#include<iostream>
#include<string>
using namespace std;
class person{
    private: 
        int age;
        int sal;
        string name;
    public:
        void profile (){
            sal=sal+2000;
            age=age+2;
            cout<<name<<" "<<age<<" "<<sal;
        }
    person(string n,const int a, int s):name{n},age{a},sal{s} {}
};
main(){
    person s("Aman",19,20000);
    s.profile();
}