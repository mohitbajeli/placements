#include<bits/stdc++.h>

using namespace std;

    char toLower(char s){
        if(s>='a' && s<='z'){
             return s;
        }
        else{
            char temp = s-'A'+'a';
            return temp;
        }
        
    }

    string removenumeric(string ch){
        string s;
        int j=0;
        
        for(int i=0;i<ch.size();i++){
            if(ch[i]>='a' && ch[i]<='z' || ch[i]>='A' && ch[i]<='Z'){
                s[j]=ch[i];
                j++;
            }
        }

        return s;
    }
    bool isPalindrome(string s) {


        if(s.size()==0){
            return true;
        }       

        string g= removenumeric(s);
        

        

        int st=0;
        int e=g.size()-1;

        while(st<=e){
            if(toLower(g[st++])!=toLower(g[e--])){
                return false;
            }
        }
        return true;
    }

    int main(){
        string s = "A man, a plan, a canal: Panama";
        if(isPalindrome(s)){
            cout<<"palindrome "<<endl;
        }
        else{
            cout<<"not a palindrome";
        }
    }
