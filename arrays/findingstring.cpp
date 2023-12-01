#include<bits/stdc++.h>

using namespace std;

bool checkequal(int count1[26],int count2[26]){
    for(int i=0;i<26;i++){
        if(count1[i]!=count2[i]){
            return false;
        }
    }
    return true;
}

bool checkinclusion(string s1,string s2){
    int count1[26]={0};

    for(int i=0;i<s1.length();i++){
        int index = s1[i]-'a';
        count1[index]++;
    }
    
    int i=0;
    int windowsize=s1.length();
    int count2[26]={0};
    while(i<windowsize && i<s2.length()){
       int index=s2[i]-'a';
       count2[index]++;
       i++;
    }
    if(checkequal(count1,count2)){
        return 1;
    }
    while(i<s2.length()){
        char newchar= s2[i];
        int index=newchar-'a';
        count2[index]++;

        char oldchar=s2[i-windowsize];
        index=oldchar-'a';
        count2[index]--;

        if(checkequal(count1,count2))
        return 1;
        i++;
    }

    return 0;
}

int main(){
string s1="ab";
string s2="eidbeaoo";
if(checkinclusion(s1,s2)){
    cout<<"present";
}
else{
    cout<<"not present";
}
}