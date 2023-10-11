#include<bits/stdc++.h>

using namespace std;

class Employee{
int id;
//int count;  //by this we cannot store count value to multiple objects 
            //therefore we use static member. we declare these outside class.
static int count; //declaration by default value is 0
public:
void setdata(){
    cout<<"enter the id "<<endl;
    cin>>id;
}

void getdata(){
    count++;
    cout<<"the id of this employee is "<<id<<" and this is employee number "<<count<<endl;
}

static void getcount(){
    cout<<"the value of count is "<<count<<endl;
}//static function can be used without using object name.
};
int Employee::count;
int main(){
Employee mohit,mansi,bajeli;
mohit.setdata();
mohit.getdata();
Employee ::getcount();

mansi.setdata();
mansi.getdata();
Employee ::getcount();
bajeli.setdata();
bajeli.getdata();
Employee ::getcount();
return 0;
}