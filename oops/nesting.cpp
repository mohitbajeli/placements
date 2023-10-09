#include<bits/stdc++.h>

using namespace std;

class binary{
    string s;
    public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void){
    cout<<"enter binary number";
    cin>>s;
}

void binary::chk_bin(void){
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' &&s.at(i)!='1'){
            cout<<"incorrect binary format"<<endl;
            return;
        }
    }
}    

void binary::ones_compliment(void){
    chk_bin(); //nesting of function
    for(int i=0;i<s.length();i++){
        if(s.at(i) == '0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void binary::display(void){
    cout<<"displaying your binary number"<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}


int main(){
binary num;
num.read();
num.display();
//num.chk_binary(); now this can be done using check binary
num.ones_compliment();
num.display();
return 0;
}