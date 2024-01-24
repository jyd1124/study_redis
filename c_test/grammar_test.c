//
// Created by jyd1124 on 2023/12/12.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../src/server.h"

int main() {
    /*char *a = "red\0is";
    char *b = "redis\0";
    printf("%lu\n", strlen(a));
    printf("%lu\n", strlen(b));*/

    /*char *a = "redis";
    while (*a) {
        printf("%c\n", *a);
        a++;
    }

    return 0;*/

    /*char *p;
    char table [3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    p = (char *) table;
    for (int i = 0; i < 9; i++) {
        printf("%d\n", *p);
        p++;
    }*/

    /*char **dp;
    char *address[3] = {};
    dp = address;
    for (int i = 0; i < 3; i++) {
        address[i] = (char *) malloc(10);
        strcpy(address[i], "redis");
    }
    for (int i = 0; i < 3; ++i) {
        printf("%p\n", *(dp+i));
    }*/

//    printf("%lu\n", sizeof(struct redisObject));
    printf("%lu\n", sizeof(uint32_t));
}