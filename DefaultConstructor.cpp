#include<iostream>
using namespace std;
class costumer{
    string name;
    int empid;
    double salary;
    public:    //by default, default constructor is private when we want to access it we make it public
    costumer(){
        //it is default constructor 
        cout<<"this is constructor working ";    
    }
};
int main(){
    //blank output
    costumer a1;  //object creation;constructor work; constructor automatically calls when object is formed  
    return 0;
}