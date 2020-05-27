cmake_minimum_required(VERSION 3.16)
project(TestBlockChain2)

set(CMAKE_CXX_STANDARD 14)

add_executable(TestBlockChain2 main.cpp Block.h Blockchain.h TransactionData.h sha256.h sha256.cpp Block.cpp Blockchain.cpp TransactionData.cpp)