#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){

    printf(1,"Processes: %d\n", info(1));
    printf(1,"System Calls: %d\n", info(2));
    printf(1,"Memory Pages: %d\n", info(3));

    exit();
}