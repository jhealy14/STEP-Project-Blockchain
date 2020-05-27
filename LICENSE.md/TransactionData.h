//
// Created by John Healy on 5/26/2020.
//

#ifndef TESTBLOCKCHAIN2_TRANSACTIONDATA_H
#define TESTBLOCKCHAIN2_TRANSACTIONDATA_H

#include <cstdint>
#include <iostream>
using namespace std;

class TransactionData{
public:
    TransactionData(int transNum);
    void displayData(int transNum);
    void printSmartContract(int transNum, string fileName);
    string getName();
    string getProduct();
    double getPrice();

private:
    string name;
    string supplier;
    string location;
    string product;
    int quantity;
    double price;
};

#endif //TESTBLOCKCHAIN2_TRANSACTIONDATA_H
