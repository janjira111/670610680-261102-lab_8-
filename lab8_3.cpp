#include <iostream>
using namespace std;

int main(){
    int a, h, b;
    cout << "Enter your age: ";
    cin >> a;
    if(a <= 25){
        cout << "Enter your height: ";
        cin >> h;
        if(h >= 100 && h <180 ){
            cout << "Your character = Usopp";
        }
        else if(h >= 180){
            cout << "Enter your bounty: ";
            cin >> b;
            if(b > 1100000000){
                cout << "Your character = Zoro";
            }
            else{
                cout << "Your character = Sanji";
            }
        }
        else{
            cout << "Your character = Chopper";
        }

    }else if(a <= 60){
        cout << "Enter your bounty: ";
        cin >> b;
        if(b > 500000000){
            cout << "Your character = Jinbe";
        }
        else {
            cout << "Your character = Franky";
        }
    }
    else{
        cout << "Your character = Brook";
    }
return 0;
}





/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

