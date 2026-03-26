#include "p147_5-2.hpp"
using namespace std;

void russianroulette(int nTurns, int nBullets, int nChambers)
{
   
    int start = rand() % nTurns;  
    int alivePlayers[nTurns]; 
    int aliveCount = nTurns;   

    for (int i = 0; i < nTurns; i++)
        alivePlayers[i] = 1;

    printf("총을 돌렸습니다. %d번부터 시작합니다.\n", start + 1);
        


    while (nBullets > 0 && aliveCount > 1) { 
        while (alivePlayers[start] == 0) {  
            start = (start + 1) % nTurns;
        }

        int pos = rand() % nChambers;
        printf("%d번 탄창을 무작위로 돌렸습니다.\n", start + 1);
        printf("엔터를 누르면 격발됩니다...");
        getchar();
        if (pos < nBullets) {
            printf("빵\n");
            printf("%d번 참가자가 총에 맞았습니다.\n", start + 1);
            alivePlayers[start] = 0;  
            aliveCount--;  
            nBullets--;  
        } else {
            printf("휴~~~ 살았습니다!!!\n");
        }

        do {
            start = (start + 1) % nTurns; 
        } while (alivePlayers[start] == 0);
    }

    printf("게임 종료!\n");
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