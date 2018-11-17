#include <iostream>
#include <stdio.h>

using namespace std;
string input;

string CekPass(string input)
{
    int n = input.length();

    bool hasLower = false, hasUpper = false, specialChar = false;
    string normalChars = "abcdefghijklmnopqrstu" "vwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

    for (int i = 0; i<n; i++)
    {
        if(islower(input[i]))
            hasLower = true;
        if(isupper(input[i]))
            hasUpper = true;

        size_t special = input.find_first_not_of(normalChars);
        if (special != string::npos)
            specialChar = true;
    }

    cout <<endl<<"Cek Password : ";
    if(hasLower && hasUpper && specialChar && (n>=8))
        cout<<"Password Valid" <<endl;
    else
        cout<<"Password Tidak Valid"<<endl;

}

int main()
{
cout<<"Masukkan string: "<<endl;
cin>>input;
CekPass(input);
}
