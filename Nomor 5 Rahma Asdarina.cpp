#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
string str;
char ch1;
char ch2;

string ganti(string str, char ch1, char ch2){
    int pjgstring = str.length();
    cout<<endl;
    for(int i = 0; i<pjgstring; i++){
       if(str[i] == ch1)
            str[i]=ch2;
            cout<<str[i];
    }

}

main(){
cout<<"Masukkan string: "<<endl;
cin>>str;
cout<<"Masukkan karakter apa yang mau diganti: "<<endl;
cin>>ch1;
cout<<"Diganti dengan karakter : "<<endl;
cin>>ch2;
ganti(str,ch1,ch2);
}
