#include<iostream>
using  namespace std;
class A{      //syntax of simple class
    private:        //private members of the values
    int b;
    char c;
    char f;
    int d;
};
int main(){
    A obj;
    cout<<sizeof(obj)<<endl;
    return 0;
}