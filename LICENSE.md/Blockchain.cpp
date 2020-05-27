//
// Created by John Healy on 5/26/2020.
//

#include "Blockchain.h"

Blockchain::Blockchain() {
    chain.emplace_back(Block(0, "Genesis Block"));
    difficulty = 2;
}

void Blockchain::addBlock(Block bNew) {
    bNew.previousHash = getLastBlock().getHash();
    bNew.MineBlock(difficulty);
    chain.push_back(bNew);
}

Block Blockchain::getLastBlock() const {
    return chain.back();
}
