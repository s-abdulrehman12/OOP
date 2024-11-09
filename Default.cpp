#include<iostream>
using namespace std;
class costumer1{
    string name;
    int empid;
    double salary;
    public:    //by default, default constructor is private when we want to access it we make it public
    costumer1(){
        //it is default constructor 
        cout<<"this is constructor working ";    
        name="Mohit";    //this is  used to initialize the values to make  the make a1
        empid=102;
        salary=98.76;
    }
    void display(){    //this is used to display the values that we initialized in the object a1
        cout<<name<<" "<<empid<<" "<<salary<<" "<<endl;
    }
};
int main(){
    //blank output
    costumer1 a1;  //object creation;constructor work; constructor automatically calls when object is formed  
    a1.display(); //to make somethings happen 
    return 0;
}