#include "types.h"
#include "stat.h"
#include "user.h"

int	main(int argc, char *argv[])
{
    // FUNCTION_SETS_NUMBER_OF_TICKETS(30); //write your own function here
    
    int n = atoi(argv[1]);
    
    printf(1,"Tickets: %d\n", tickets(n));
    int	i, k;
    const int loop = 1000; //43000
    for(i=0; i<loop; i++) {
            
        asm("nop"); //in order to prevent the compiler from optimizing the for loop
            
        for(k=0;k<loop;k++) {
            asm("nop");
        }
    }
    printf(1,"Process complete\n");

    exit();
}