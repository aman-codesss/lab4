// Write a program that has a class with a dynamically allocated character array as its data member. One object should contain "Engineers are" and another should contain " Creatures of logic". Member function join() should concatenate two strings by passing two objects as arguments. Display the concatenated string through a member function. Use constructors to allocate and initialize the data member. Also, write a destructor to free the allocated memory for the character array. Make your own function for the concatenation of two strings.

#include<iostream>
using namespace std;
class String{
    private:
        char* ch;
    public:
         String(const char* temp){
            int len =0;
            while(temp[len]!='\0') len++;
            ch = new char[len+1];
            
            for(int i=0;i<len;i++){
                ch[i]=temp[i];
            }
            ch[len]='\0';
        }
        ~String(){
            delete []ch;
        }
        void join(String& a,String& b){
            int len1=0,len2=0;
            while(a.ch[len1]!='\0') len1++;
            while(b.ch[len2]!='\0') len2++;
            delete []ch;
            ch = new char[len1+len2+1];

            //joining or concatinating
            
            for(int i=0;i<len1;i++){
                ch[i]=a.ch[i];
            }
            for(int i=0;i<len2;i++){
                ch[len1+i] = b.ch[i];
            }

        }
        void display(){
            cout<<ch<<endl;
        }
};
int main(){
    String s1("Engineers are");
    String s2(" creatures of logic.");
    String s(" ");
    s.join(s1,s2);
    s.display();

}