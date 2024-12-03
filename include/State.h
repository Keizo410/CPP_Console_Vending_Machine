#ifndef STATE_H_
#define STATE_H_

class VendingMachine;

class State{
public:
    virtual void insertCoin(VendingMachine* machine)=0;
    virtual void ejectCoin(VendingMachine* machine)=0;
    virtual void selectProduct(VendingMachine* machine)=0;
    virtual void dispenseProduct(VendingMachine* machine)=0;
};

class IdleState: public State{
public:
    void insertCoin(VendingMachine* machine) override; 
    void ejectCoin(VendingMachine* machine) override;
    void selectProduct(VendingMachine* machine) override;
    void dispenseProduct(VendingMachine* machine) override;
};

class HasCoinState: public State{
public:
    void insertCoin(VendingMachine* machine) override; 
    void ejectCoin(VendingMachine* machine) override;
    void selectProduct(VendingMachine* machine) override;
    void dispenseProduct(VendingMachine* machine) override;
};

class DispensingState: public State{
public:
    void insertCoin(VendingMachine* machine) override; 
    void ejectCoin(VendingMachine* machine) override;
    void selectProduct(VendingMachine* machine) override;
    void dispenseProduct(VendingMachine* machine) override;
};

#endif