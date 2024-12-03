#ifndef VENDINGMACHINE_H_
#define VENDINGMACHINE_H_

class State;

class VendingMachine{
private:
    State* currentState;
    int coinsInserted;
public:
    VendingMachine();
    void insertCoin();
    void ejectCoin();
    void selectProduct();
    void dispenseProduct();
    void setState(State* newState);
};

#endif