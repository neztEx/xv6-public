#include "types.h"
#include "stat.h"
#include "user.h"

int	main(int argc, char *argv[])
{
    // FUNCTION_SETS_NUMBER_OF_TICKETS(30); //write your own function here
    int v = atoi(argv[1]);
    int n = tickets(atoi(argv[2]));
    int	i, k;
    const int loop = 43000; //43000
    int startTicks = tick();
    // int currentTicks[loop / 1000];
    for(i=0; i<loop; i++) {
        asm("nop"); //in order to prevent the compiler from optimizing the for loop   
        for(k=0;k<loop;k++) {
            asm("nop");
        }
        // if(i % 1000 == 0)
        //     currentTicks[i / 1000] = tick() - startTicks;
    }
    
    // for(i = 0; i <43; i++){
    //     printf(1,"Process %d: %d Tickets and %d ticks\n", v, n, currentTicks[i]);
    // }
    printf(1,"Process %d: %d Tickets and %d ticks\n", v, n, tick() - startTicks);
    
    exit();
}