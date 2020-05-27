#include <iostream>
#include "Blockchain.h"
#include "TransactionData.h"

int main() {
    Blockchain bChain = Blockchain();
    int transNum = 1;
    TransactionData transaction = TransactionData(transNum);

    cout << "Mining Block 1 ..." << endl;
    string fileName = "SmartContract1.txt";
    transaction.printSmartContract(transNum, fileName);
    //transaction.displayData(transNum); //This will be hidden and put into a file (recipt);
    bChain.addBlock(Block(1, "Block 1 Data"));

    cout << endl;

    transNum++;
    cout << "Mining Block 2 ..." << endl;
    string fileName2 = "SmartContract2.txt";
    transaction.printSmartContract(transNum, fileName2);
    //transaction.displayData(transNum);
    bChain.addBlock(Block(1, "Block 2 Data"));

    cout << endl;

    transNum++;
    cout << "Mining Block 3 ..." << endl;
    string fileName3 = "SmartContract3.txt";
    transaction.printSmartContract(transNum, fileName3);
    //transaction.displayData(transNum);
    bChain.addBlock(Block(1, "Block 3 Data"));

    return 0;
}
