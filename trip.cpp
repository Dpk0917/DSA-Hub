#include <iostream>
using namespace std;

int main() {
    
    int savings;
    cout<<"enter the amount\n";
    cin>>savings;
    
    if(savings>1000){
        if(savings>10000){
        cout<<"roadtrip\n";
        }
        else{
            cout<<"tution\n";
     }
    }    else if(savings>500){
        cout<<"school\n";
     }
    else{
        cout<<"friends\n";
     }

}