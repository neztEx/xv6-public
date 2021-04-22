#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
    int i;
    for(i = 1; i < 4; i++){
        printf(1,"info(%d): %d\n", i, info(i));
    }
    exit();
}