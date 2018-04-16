//
// Created by 林庆华 on 2018/4/13.
//

#ifndef MAIN_CPP_MEMORY_H
#define MAIN_CPP_MEMORY_H

#include <list>
#include "Block.h"
#include "PageReplacementAlgorithm.h"

using namespace std;

class Memory {

public:



private:

    list<Block> *blocks;

    PageReplacementAlgorithm *pageReplacementAlgorithm;

public:

    explicit Memory(int blocksCount);

    Block response(Request request);

    Block response(RequestSequence requestSequence);


};


#endif //MAIN_CPP_MEMORY_H
