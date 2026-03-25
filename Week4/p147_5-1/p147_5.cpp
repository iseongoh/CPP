#include "p147_5.hpp"

int russianroulette(int nTurns, int nBullets, int nChambers)
{
    int start = rand() % nTurns;   
    printf("\n총을 돌렸습니다. %d번부터 시작합니다.\n", start + 1);

    while (true) {
        
        
        int pos = rand() % nChambers;
        printf("[%d번\t탄창을 무작위로 돌렸습니다.\n", start + 1);
        
        
        printf("\t엔터를 누르면 격발됩니다...");
        getchar();  
        if (pos < nBullets) break;   
        printf("\t살았습니다!\n");
        start = (start + 1) % nTurns;
    }
    
    printf("\t빵\n");
    return start+1;
}

int main()
{
    int nTurns, nBullets, nChambers;
    srand((unsigned)time(NULL));  
    printf("게임 인원 (예: 2) ==> ");
    scanf("%d", &nTurns);   
    printf("탄창 개수 (예: 6) ==> ");
    scanf("%d", &nChambers);  
    printf("총알 개수 (전체 탄창 개수보다 작게 입력) ==> ");
    scanf("%d", &nBullets);  
    getchar();  
    russianroulette(nTurns, nBullets, nChambers);
    
    return 0;
}
