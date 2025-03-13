#include<iostream>
using namespace std;

int main(){
    int rows;
    cin>>rows;
    int currrow=1;
    int num=1;
    while(currrow<=rows){
        int i=0;
        while(i<currrow){
            cout<<num;
            num++;
            i++;
        }
        cout<<endl;
        currrow++;
    }
    return 0 ;
}