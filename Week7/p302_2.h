#ifndef MYDIC_H
#define MYDIC_H

#define MAX_WORDS 100

#include <cstdio>
#include <cstring>

struct WordPair {
    char eng[50];
    char kor[50];
};

class MyDic {
private:
    WordPair words[MAX_WORDS];
    int nWords;

public:
    MyDic();
    void add(const char* eng, const char* kor);
    void load(const char* filename);
    void store(const char* filename);
    void print();
    const char* getEng(int id);
    const char* getKor(int id);
    int getCount();
};

#endif