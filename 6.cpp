#include<iostream>
using namespace std;
class Data{
    private:
       static int sn;
       int i;
    public:
        Data(){
            increase();
            i=sn;
        }
        static int increase(){
            return sn++;
        }
        int getIndex(){
            return i;
        }
};

 int Data::sn=0;

int main(){
    Data d1,d2,d3;
    cout<<"Object no. :"<<d1.getIndex()<<endl;
    cout<<"Object no. :"<<d2.getIndex()<<endl;
    cout<<"Object no. :"<<d3.getIndex()<<endl;
    
}