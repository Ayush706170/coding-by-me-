#include<iostream>
using namespace std;

class ayush 
{
    private:
    int a, b, c;
    public:
    int d, e;
    void setdata(int a1, int b1, int c1); //decleration 
    void getdata(){

    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;
    cout<<"the value of d is "<<d<<endl;
    cout<<"the value of e is "<<e<<endl;

    }

};

void ayush :: setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}                                       

int main(){
    ayush ankit;
    ankit.d = 23;
    ankit.e = 25;
    ankit.setdata(12, 45, 34);
    ankit.getdata();
    return 0;
}