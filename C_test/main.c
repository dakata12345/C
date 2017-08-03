/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: dakata
 *
 * Created on June 21, 2017, 3:23 PM
 */


 #include <stdio.h>
#include <string.h>
#include <stdlib.h>

 /*char *returnChar(char *cuv){
     int len = strlen(cuv);
     if (len > 0){
         cuv++;
     }
     if (len > 1){
         cuv[len - 2] = '\0';
     }
     return cuv;
    
    
}
  
  void  returnChar(char cuv[]){
        if (strlen(cuv) != 1){
        char output[30];
        int i = 0;
        while(cuv[i] !='\0'){
        output[i] = cuv[i+1];
        i++;
        }
        printf("%s",output);
        output[i-2] = '\0';
        printf("\n");
        printf("%s",output);
        printf("\n");
       if (strlen(output)!=1) returnChar(output);
    } else if (strlen(cuv) == 1){
        printf("%s",cuv);
    }
}
*/

/*float readTempCelsius(){
    float temp;
    printf("Introduceti temperatura in grade Celsius \n");
    fflush(stdout); 
    scanf("%f",&temp);
    return temp;
}
float celsius2fahrenheit(float temp){
    return temp*1.8 + 32;
}
 */
 
int determinant (int matrix[3][3]){
   int det = 0; 
   det = matrix[0][0]*matrix[1][1]*matrix[2][2] + matrix[1][0]*matrix[2][1]*matrix[0][2] + matrix[1][0]*matrix[0][1]*matrix[1][2] -matrix[0][2]*matrix[1][1]*matrix[2][0] - matrix[1][2]*matrix[2][1]*matrix[0][0]-matrix[2][1]*matrix[0][1]*matrix[1][0];
   return det; 
}

int columnSum(int n,int m,int matrix[n][m],int column){
    int sum = 0;
    if (column > m){
        printf("Coloana nu exista in matrice");
        return 0;
    }
    else{
        column--;
    for (int i = 0; i < n ;i++){
        for (int j = 0 ; j < m ;j++){
            if (j == column) sum+=matrix[i][j];
        }
    }
   
   }
    return sum;
    
}
int palindrom(char c[],int len){
    int i,k = 0;
    char d[len];
    for (i = len-1 ; i >= 0;i--){
        d[k] = c[i];
        k++;
        if (k == len){
            d[k] = '\0';
        }
        
    }
    printf("%s \n",d);
    if (strcmp(c,d) == 0){
        return 1;
    } else{
        return 0;
    }
    
}

int charCompare(char string1[], char string2[] ){
     int i = 0;
    int flag = 0;    
    while (flag == 0)
    {
        if (string1[i] > string2[i])
        {
            flag = 1;
        }
        else if (string1[i] < string2[i])
        {
            flag = -1;
        }

        if (string1[i] == '\0')
        {
            break;
        }

        i++;
    }
    return flag;
}


int main(){
    
    /*printf("Introduceti raza cercului \n");
    fflush(stdout);
    int raza;
    scanf("%d",&raza);
    float pi = 3.14;
    printf("Alegeti optiunea A-arie , L-lungime \n");
    fflush(stdout);
    char c;
    float a = raza*raza*pi;
    float l = 2*pi*raza;
    scanf("%s",&c);
    switch(c){
        case 'A' : printf("Aria este %.2f",a);
                   fflush(stdout); 
                   break; 
        case 'L' : printf("Lungimea este %.2f",l);
                   fflush(stdout);
                   break;
        case 'q' : printf("Iesire..");
                   fflush(stdout); 
                   break;
    }
     */
    /*int a;
    printf("Introduceti valoarea a \n");
    fflush(stdout);
    scanf("%d",&a);
    int b = 2*a;
    do {
        printf(" %d * %d = %d \n",a,a,a*a);
        a++;
    }while(a<=b);
            
    */
    
    
    /*while(strlen(output)!=0){    
        output = returnChar(cuv);
        puts(output);
    }
     
    float temp = readTempCelsius();
    printf("%.2f",celsius2fahrenheit(temp));
    return 0;
     
    int n,m,column;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&column);
    int matrix[n][m];
    for (int i = 0 ; i < n ;i++){
        for (int j = 0 ; j < m; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int i = 0 ; i < n ;i++){
        for (int j = 0 ; j < m; j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    printf("%d",columnSum(n,m,matrix,column));
     
    
    char c[20];
    scanf("%s",c);
    int k = 0;
    while(c[k]!='\0'){
        k++;
    }
    char d[10];
    if (palindrom(c,k)){
        d[0] = 't';
        d[1] = 'r';
        d[2] = 'u';
        d[3] = 'e';
        d[4] = '\0';
    } else {
         d[0] = 'f';
        d[1] = 'a';
        d[2] = 'l';
        d[3] = 's';
        d[4] = 'e';
        d[5] = '\0';
    }
    printf("%s",d);
     */
    char c1[20],c2[20];
    scanf("%s",c1);
    scanf("%s",c2);
    printf("%d \n",strcmp(c1,c2));
    printf("%d",charCompare(c1,c2));
    
}
