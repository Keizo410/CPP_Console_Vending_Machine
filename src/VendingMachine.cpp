#include <iostream>
using namespace std;
#include "VendingMachine.h"
#include "State.h"

VendingMachine::VendingMachine() : currentState(new IdleState()), coinsInserted(0){};

void VendingMachine::insertCoin(){
    currentState -> insertCoin(this);
}

void VendingMachine::ejectCoin(){
    currentState -> ejectCoin(this);
}

void VendingMachine::selectProduct(){
    currentState -> selectProduct(this);
}

void VendingMachine::dispenseProduct(){
    currentState -> dispenseProduct(this);
}

void VendingMachine::setState(State* newState){
    currentState = newState;
}

