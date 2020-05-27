//
// Created by John Healy on 5/26/2020.
//

#ifndef TESTBLOCKCHAIN2_BLOCK_H
#define TESTBLOCKCHAIN2_BLOCK_H

#include <cstdint>
#include <iostream>
using namespace std;

class Block{
public:
    string previousHash;
    Block(int index, string sDataIn);
    string getHash();
    void MineBlock(int difficulty);

private:
    int index;
    int nonce;
    string sData;
    string hash;
    time_t timer;
    string calculateHash() const;

};

#endif //TESTBLOCKCHAIN2_BLOCK_H
