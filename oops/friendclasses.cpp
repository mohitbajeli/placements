#include<bits/stdc++.h>

using namespace std;

class Complex{
    int a,b;
    friend int Calculator:: sumComplex(Complex o1,Complex o2);
    public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }
 
    void printnumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

class Calculator{
    public:
    int add(int a,int b){
        return (a+b);
    }

    int sumComplex(Complex o1,Complex o2){
        return (o1.a+o2.a);
    }
};

int main(){

}