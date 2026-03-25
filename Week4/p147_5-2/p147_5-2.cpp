#include "p147_5-2.hpp"
using namespace std;

void russianroulette(int nTurns, int nBullets, int nChambers)
{
   
    int start = rand() % nTurns;  
    int alivePlayers[nTurns]; 
    int aliveCount = nTurns;   

    for (int i = 0; i < nTurns; i++)
        alivePlayers[i] = 1;

    printf("\n총을 돌렸습니다. %d번부터 시작합니다.\n", start + 1);
        


    while (nBullets > 0 && aliveCount > 1) { 
        while (alivePlayers[start] == 0) {  
            start = (start + 1) % nTurns;
        }

        int pos = rand() % nChambers;
        printf("[%d번]\t탄창을 무작위로 돌렸습니다.\n", start + 1);
        printf("\t엔터를 누르면 격발됩니다...");
        getchar();
        if (pos < nBullets) {
            printf("\t빵~~~~~!!!\n");
            printf("-----> %d번 참가자가 총에 맞았습니다.\n", start + 1);
            alivePlayers[start] = 0;  
            aliveCount--;  
            nBullets--;  
        } else {
            printf("\t휴~~~ 살았습니다!!!\n");
        }

        do {
            start = (start + 1) % nTurns; 
        } while (alivePlayers[start] == 0);
    }

    printf("\n게임 종료! 모든 총알이 발사되었고, 남은 사람은 생존입니다!\n");
}
int main()
{

    return 0;
}