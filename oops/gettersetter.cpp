#include<bits/stdc++.h>

class hero{
  
  private:
  int health;
  public:
  char level;

  int gethealth(){  //used to fetch the values of the  private member from outside class.
    return health;
  }
  void sethealth(int h1){  //used to set the value of private member from outside class.
    health=h1;
  }

};

using namespace std;

int main(){
    hero mohit;
    mohit.sethealth(50);
    mohit.level='A';

    cout<<"The health of mohit is "<<mohit.gethealth()<<endl;
    cout<<"the level of mohit is "<<mohit.level;
}