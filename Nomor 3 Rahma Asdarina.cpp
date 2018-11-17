#include <iostream>
using namespace std;
int angka;

void segitiga(int angka){
    for(int i = 1; i<= angka;i++){
        for(int j=1; j<=(angka*2)-1; j++){
            if((i==1)||(i==j)||(j-angka==angka-i))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

main(){
cout<<"Masukkan angka : "<<endl;
cin>>angka;
segitiga(angka);
cout<<endl<<endl<<endl;
}
