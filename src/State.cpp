#include <iostream>
#include "State.h"
#include "VendingMachine.h"
using namespace std;

void IdleState::insertCoin(VendingMachine* machine){
    cout << "Coin inserted" << endl;
    machine -> setState(new HasCoinState());
};

void IdleState::ejectCoin(VendingMachine* machine){
    cout << "No Coin to eject" << endl;
};

void IdleState::selectProduct(VendingMachine* machine){
    cout << "Insert a coin first" << endl;
};

void IdleState::dispenseProduct(VendingMachine* machine){
    cout << "Insert a coin first" << endl;
};

void HasCoinState::insertCoin(VendingMachine* machine){
    cout << "Coin already inserted" << endl;
};

void HasCoinState::ejectCoin(VendingMachine* machine){
    cout << "Coin ejected" << endl;
    machine -> setState(new IdleState());
};

void HasCoinState::selectProduct(VendingMachine* machine){
    cout << "Product selected" << endl;
    machine -> setState(new DispensingState());
};

void HasCoinState::dispenseProduct(VendingMachine* machine){
    cout << "Select a product first" << endl; 
};

void DispensingState::insertCoin(VendingMachine* machine){
    cout << "Cannot insert coin while dispensing" << endl; 
};

void DispensingState::ejectCoin(VendingMachine* machine){
    cout << "Cannot eject coin while dispensing" << endl; 
};

void DispensingState::selectProduct(VendingMachine* machine){
    cout << "Cannot select product while dispensing"<< endl;
};

void DispensingState::dispenseProduct(VendingMachine* machine){
    cout << "Product dispensed" << endl;
    machine -> setState(new IdleState());
};