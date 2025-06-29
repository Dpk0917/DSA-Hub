#include<iostream>    //let us use standard input and output function
#include<cstdlib>     //It will give set of  random numbers 
#include<ctime>       //IProvides functions to manipulate and get the current system time.
#include<string>

using namespace std;  //let us write string,cout,cin,int, etc without needing to write std:: infront of them

string getPassword(int length){  // return a password of the given length(given by the user)
    string Password="";  //empty string stores password 

    //this sentence wil contain all small chatracters to capital  characters and numbers as well
    string character="aquickbrownfoxjumspoverthelazydogAQUICKBROWNFOXJUMSPOVERTHELAZYDOG0123456789";

    int charsize=character.size();  //charsize stores the length of the character 
    srand(time(0));              //seed-random function is used here to generate random combinations where current time is taken as seed resisting generation of same combinations of pass 
    int randomIndex;
    for(int i=0;i<length;i++){

        // rand() generates a random number.
        //charsize keeps the number within the range of character length.       
        //This gives a random position in the character string.
        randomIndex=rand() % charsize; 
       
        // Adds the randomly selected character to the Password string.
        Password=Password+character[randomIndex];

    }
    return Password;

}

    int main(){

    int length;
    cout<<"Enter the length of the Password : ";
    cin>>length;

    string password=getPassword(length);
    cout<<"Generated Password : "<<password;
    

    return 0;
}