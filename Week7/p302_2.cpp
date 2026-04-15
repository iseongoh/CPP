#include "p302_2.h"

MyDic::MyDic() {
    nWords = 0;
}

void MyDic::add(const char* eng, const char* kor) {
    if (nWords < MAX_WORDS) {
        strcpy(words[nWords].eng, eng);
        strcpy(words[nWords].kor, kor);
        nWords++;
    }
}

void MyDic::load(const char* filename) {
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) return;
    nWords = 0;
    while (fscanf(fp, "%s %s", words[nWords].eng, words[nWords].kor) != EOF) {
        nWords++;
        if (nWords >= MAX_WORDS) break;
    }
    fclose(fp);
}

void MyDic::store(const char* filename) {
    FILE* fp = fopen(filename, "w");
    if (fp == NULL) return;
    for (int i = 0; i < nWords; i++) {
        fprintf(fp, "%s %s\n", words[i].eng, words[i].kor);
    }
    fclose(fp);
}

void MyDic::print() {
    for (int i = 0; i < nWords; i++) {
        printf("%s : %s\n", words[i].eng, words[i].kor);
    }
}

const char* MyDic::getEng(int id) { return words[id].eng; }
const char* MyDic::getKor(int id) { return words[id].kor; }
int MyDic::getCount() { return nWords; }

int main() {
    MyDic dic;

    dic.add("apple", "사과");
    dic.add("banana", "바나나");
    dic.add("computer", "컴퓨터");

    dic.store("words.txt");
    dic.print();

    MyDic testDic;
    testDic.load("words.txt");
    testDic.print();

    return 0;
}