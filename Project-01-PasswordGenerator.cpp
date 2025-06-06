#include<iostream>
#include<cstdlib>     //It will give set of  random numbers 
#include<ctime>       //IProvides functions to manipulate and get the current system time.

using namespace std;

int main(){

    int length;
    cout<<"Enter the length of the Password : ";
    cin>>length;

    string password=getPassword(length);

    

    return 0;
}