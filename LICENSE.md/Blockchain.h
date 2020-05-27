//
// Created by John Healy on 5/26/2020.
//

#ifndef TESTBLOCKCHAIN2_BLOCKCHAIN_H
#define TESTBLOCKCHAIN2_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"
using namespace std;

class Blockchain{
public:
    Blockchain();
    void addBlock(Block bNew);

private:
    int difficulty;
    vector<Block> chain;
    Block getLastBlock() const;
};

#endif //TESTBLOCKCHAIN2_BLOCKCHAIN_H
