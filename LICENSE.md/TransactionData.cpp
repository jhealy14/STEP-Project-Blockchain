//
// Created by John Healy on 5/26/2020.
//

#include "TransactionData.h"
#include <iostream>
#include <sstream>
#include <fstream>

TransactionData::TransactionData(int transNum) {
    name = "John";
    supplier = "Amazon";
    location = "44 South Lewis Place, Rockville Centre, NY, 11570";
    product = "Computer";
    quantity = 1;
    price = 100.00;
}

void TransactionData::displayData(int transNum) {
    cout << "Transaction Number: " << transNum << endl;
    cout << "Customer Name: " << name << endl;
    cout << "Drop off Location: " << location << endl;
    cout << "Product Name: " << product << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price before tax: $" << price << endl;
}

void TransactionData::printSmartContract(int transNum, string fileName) {
    ostringstream strs;
    strs << price;
    string price = strs.str();

    ofstream contract;
    contract.open(fileName);

    contract << "Transaction #" << transNum << endl;
    contract << endl;

    string line = name + " agrees to pay " + supplier + " $" + price + " for " + product;
    contract << line << endl;

    contract.close();

}

string TransactionData::getName() {
    return name;
}

string TransactionData:: getProduct() {
    return product;
}

double TransactionData:: getPrice(){
    return price;
}

