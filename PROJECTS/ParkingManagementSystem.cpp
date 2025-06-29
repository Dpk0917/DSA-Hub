#include <iostream>
using namespace std;

int main()
{
    int choice;
    int amount = 0;
    int count = 0;

    cout << "WELCOME TO ARZU-PARKING SYSTEM" << endl;

    string JUJU = "ARZU";
    string name;
    cout << "Enter your name please : ";
    cin >> name;
    cout << endl;

    cout << "Choose your vehicle type" << endl;
    cout << "Press 1: FOR BIKE OR SCOOTY (FARE : 100)" << endl;
    cout << "Press 2: FOR CAR (FARE : 200)" << endl;
    cout << "Press 3: FOR AUTO (FARE : 300)" << endl;
    cout << "Press 4: FOR TRUCK (FARE : 400)" << endl;
    cout << "Press 5: FOR TOTAL REVENUE OF THE DAY AND CUSTOMER" << endl;
    cout << "Press 6: FOR DELETE" << endl;
    cout << " Enter Your Choice : ";
    cin >> choice;
    cout << endl;

    if (choice > 6 || choice < 1)
    {
        cout << "Zyada tez ho rha hai BSDK wapis choose kr MADARCHODH" << endl;
        cout << "Choose your vehicle type or delete (1-6)" << endl;
        cin >> choice;
    }

    if (name == JUJU)
    {
        cout << "APKO PAY KRNE KI ZARURAT NAHI MADAM :) " << endl;
    }

    while (true)
    {
        if (choice == 1)
        {
            amount += 100;
            count++;
        }
        else if (choice == 2)
        {
            amount += 200;
            count++;
        }
        else if (choice == 3)
        {
            amount += 300;
            count++;
        }
        else if (choice == 4)
        {
            amount += 400;
            count++;
        }
        else if (choice == 5)
        {
            cout << "Total Revenue of the Day : " << amount << endl;
            cout << "Total Number of Customer : " << count << endl;
        }
        else if (choice == 6)
        {
            amount = 0;
            count = 0;
            cout << "Record has been deleted" << endl;
        }
        int again;
        cout << "Want to do something else? (1 = Yes, 0 = No): " << endl;
        cin >> again;
        if (again == 0)
        {
            break;
        }
        else if (again > 1)
        {
            cout << "BKL pyar se samjh nahi aata nah MADARCHOD 1 se Yes Tha aur 0 se No" << endl;
        }

        cout << "Choose your vehicle type or delete(1-6)" << endl;
        cin >> choice;

        while (choice > 6 || choice < 1)
        {
            cout << "Zyada tez ho rha hai BSDK wapis choose kr MADARCHODH" << endl;
            cout<<endl;
            cout << "Choose your vehicle type or delete (1-6)" << endl;
            cout << "Choose your vehicle type" << endl;
            cout << "Press 1: FOR BIKE OR SCOOTY (FARE : 100)" << endl;
            cout << "Press 2: FOR CAR (FARE : 200)" << endl;
            cout << "Press 3: FOR AUTO (FARE : 300)" << endl;
            cout << "Press 4: FOR TRUCK (FARE : 400)" << endl;
            cout << "Press 5: FOR TOTAL REVENUE OF THE DAY AND CUSTOMER" << endl;
            cout << "Press 6: FOR DELETE" << endl;
            cout << " Enter Your Choice : ";
            cin >> choice;
        }
    }

    cout << "Thank You For Visiting One and Only ZUZU Parking Service" << endl;

    return 0;
}