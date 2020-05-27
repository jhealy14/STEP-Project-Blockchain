//
// Created by John Healy on 5/26/2020.
//

#include "Block.h"
#include "sha256.h"
#include <time.h>
#include <sstream>
#include <utility>

Block::Block(int index, string sDataIn) : index(index), sData(std::move(sDataIn)) {
    nonce = -1;
    timer = time(nullptr);
}

string Block::getHash() {
    return hash;
}

void Block::MineBlock(int difficulty) {
    char* cstr = new char[difficulty + 1];
    for(int i = 0; i < difficulty; i++){
        cstr[i] = '0';
    }
    cstr[difficulty] = '\0';

    string str(cstr);

    do{
        nonce++;
        hash = calculateHash();
    }while(hash.substr(0,difficulty) != str);
        cout << "Block mined: " << hash << endl;
        cout << "Time: " << timer << endl;
}

inline string Block::calculateHash() const {
    stringstream ss;
    ss << index << timer << sData << nonce << previousHash;

    return sha256(ss.str());
}

