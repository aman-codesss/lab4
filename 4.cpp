// Assume that one constructor initializes data member say num_vehicle, hour, and rate. There should be a 10% discount if num_vehicle exceeds 10. Display the total charge. Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).

#include<iostream>
using namespace std;
class Vehicle{
    private:
        int num_vehicle,hr,rate;
    public:
        Vehicle(int n,int h, int r):num_vehicle{n},hr{h},rate{r} {}
        //copy constructor

        Vehicle(Vehicle &v){
            num_vehicle=v.num_vehicle;
            hr=v.hr;
            rate = v.rate;
        }
        int charge(){
            if(num_vehicle>10){
                return .9*num_vehicle*rate*hr;
            }
            else{
                return num_vehicle*rate*hr;
            }
        }
};
int main(){
    Vehicle v1(16,5,100);
    Vehicle v2(v1);
    cout<<v2.charge();
}