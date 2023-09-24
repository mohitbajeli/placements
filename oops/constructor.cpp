#include<bits/stdc++.h>

using namespace std;

class hero{
    int health;
    public:
    hero(int health){
        cout<<"this->"<<this<<endl;
        this->health=health;
    }
    void sethealth(int h){
        health = h;

    }
    int gethealth(){
        return health;
    }
};

int main(){
    hero ramesh(10);
    cout<<"address is "<<&ramesh;
    ramesh.gethealth();
    return 0;
}