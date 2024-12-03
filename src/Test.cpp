#include <iostream>
#include "VendingMachine.h"
using namespace std;

void handleInput(int input, VendingMachine& vendingMachine);  // Pass by reference

int main(){
    VendingMachine vendingMachine;

    bool termination = false;

    while(!termination){
        cout << "Choose your action on Vending Machine:\n"
                 <<"1. insert coins\n"
                 <<"2. eject coins\n"
                 <<"3. select product\n"
                 <<"4. dispense product\n"
                 <<"5. Exit\n";
        int input;
        cin >> input;
        cout << "Your entered: " << input << endl;

        if(input==5){
            termination = true;
            cout << "Exit.";
        }else{
            handleInput(input, vendingMachine);
        }
        
    }

    return 0; 
}

void handleInput(int input, VendingMachine& VendingMachine){
    switch(input){
        case 1:
            VendingMachine.insertCoin();
            break;
        case 2:
            VendingMachine.ejectCoin();
            break;
        case 3:
            VendingMachine.selectProduct();
            break;
        case 4:
            VendingMachine.dispenseProduct();
            break;
        default:
            cout << "Invalid input, please try again." << endl;
            break;
    }
}