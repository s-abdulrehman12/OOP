#include<iostream>
using namespace std;
class a{
    private:          //members data values are set to be private for data hiding- 
    int age;
    string name;
    float gpa;
    public:            //member data functions are set to be public for performing operations-
    string getname(){
        cin>>name;
    }
    string showname(){
        return name;
    }
};
int main(){
    a obj;
    obj.getname();
    string result=obj.showname();
    cout<<"this is the output :" <<result;
    return 0;
}
