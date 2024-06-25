// Write a class that can store Department ID and Department Name with constructors to initialize its members. Write destructor member in the same class and display the message "Object n goes out of the scope". Your program should be made such that it should show the order of constructor and destructor invocation.
#include<iostream>
#include<string>
using namespace std;
class dpt{
    private:
        int dpt_id;
        string dept_name;
    public:
        dpt(int id,string name):dpt_id{id},dept_name{name}
        {
            cout<<"Constructor called"<<endl;
        }
        ~dpt(){
            cout<<"Object goes out of the scope"<<endl;
        }
};
int main(){
dpt a(1,"BCT");
dpt b(2,"BCE");
}