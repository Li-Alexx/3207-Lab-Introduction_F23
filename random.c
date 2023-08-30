#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

char randchar(){
    int r= rand()%26;
    return alphabet[r];
}