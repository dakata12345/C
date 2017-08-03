/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: dakata
 *
 * Created on August 3, 2017, 3:19 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    struct data{
        int birthday;
        char birthmonth[20];
        int birthyear;
        
    };
    
    struct Person{
        char firstname[20];
        char lastName[20];
        struct data data;
    };
    struct Person grup [10];
    int i,n;
    printf("Introduceti numarul de persoane ( >0 <10) \n");
    fflush(stdout);
    scanf("%d",&n);
    for (i = 0 ; i < n ; i++){
        printf("Nume Prenume Ziua Luna Anul \n");
        fflush(stdout);
        scanf("%s  %s  %d  %s  %d",&grup[i].firstname,&grup[i].lastName,&grup[i].data.birthday,&grup[i].data.birthmonth,&grup[i].data.birthyear);
    }
    printf("Nume Prenume Ziua Luna Anul \n");   
    for (i = 0 ; i < n ; i++){
        printf("%s %s %d %s %d",grup[i].firstname,grup[i].lastName,grup[i].data.birthday,grup[i].data.birthmonth,grup[i].data.birthyear);
        fflush(stdout);
    }
    return 0;
}

