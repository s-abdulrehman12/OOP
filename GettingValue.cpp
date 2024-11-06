#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    float gpa;
};
int main(){
    student (*s) =new student;
    s->name="Rogit";
    s->age=18;
    s->gpa=3.08;
     cout<<s->name<<" "<<s->age<<" "<<s->gpa;
    return 0;
}