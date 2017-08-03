/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: IONESCU
 *
 * Created on June 25, 2017, 3:50 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 
 */
/*typedef int bool;
#define true 1;
#define false 0;
int main(int argc, char** argv) {
    bool ok = true;
    while(ok){

        float a,b;
        printf("Introduceti valorile pentru a si b :\n");
        scanf("%f %f",&a,&b);
        printf("Alegeti varianta + - / * \n");
        char c ;
        scanf("%s",&c);
        
        switch(c){
            case '+' : printf("%.2f\n",a+b);
                       break;   
            case '-' : printf("%.2f\n",a-b);
                        break;
            case '/' : if(b!=0)printf("%.2f",a/b);
            else printf("Nu pot efectua impartirea"); 
                        break;
            case '*' : printf("%f\n",a*b);
                        break;
            case 'q' : ok = false;
                       break;
            default: printf("Va rog introduceti una dintre variante\n");
                       break;
    }
        
    
    }
        
    
    
    return 0;
}
 */
int main(){
   /* int n;
    printf("Introduceti numarul \n");
    scanf("%d",&n);
    int s = 1,fact = 1;
    int i;
    for (i = 1  ; i <=n;i++){
        fact = fact * i;
        s+=fact;
    }
    printf("%d",s); 
 
    */
  
   /* int i;
    scanf ("%[^\n]", c1);
    getchar();
    printf("Introduceti al doilea sir de caractere");
    scanf ("%[^\n]", c2);
    getchar();
    int k = 0;
     i = 0;
    for ( i = strlen(c2);i<200;i++){
        c1[i] = c2[k];
        if (k < strlen(c2)) k++;
    }
     puts(c1);
    */
   /* printf("Introduceti sirul 1 ");
    scanf("%s",c1);
    printf("Introduceti sirul 2 ");
    scanf("%s",c2);
    int i = 0;
    while(c1[i]!= '\0'){
        i++;
    }
    int len1 = i;
    i =0;
    while(c2[i]!= '\0'){
        i++;
    }
    int k = 0;
    int j;
    int len2 = i;
    for (j = i ; j < 200;j++){
        c1[j] = c2[k];
        if (k < i) k++;
    }
    */
    
   /* char c[100];
    int i;
    for (i = 0 ; i < 100 ; i++){
        scanf("%c",&c[i]);
        if (c[i] == '\n'){
            c[i] = '\0';
            break;
        }
    }
    char c1;
    scanf("%s",&c1);
    
    for (i = 0 ; i < 100;i++){
        if (c[i] == c1){
           c[i] = '\0'; 
        }
    }
    int j;
    for (j = 0 ; j < strlen(c);j++){
        printf("%c",c[j]);
    }
    */
    /*char c[100];
    printf("Introduceti sirul ");
    scanf("%s",c);
    int i = 0;
    while(c[i]!='\0'){
        i++;
    }
    int  j;
    for (j = i-1 ; j >=0 ; j--){
        printf("%c",c[j]);
    }
     */
   /* char c1[100],c2[100];
    printf("Introduceti sirul 1 : ");
    scanf("%s",c1);
    printf("Introduceti sirul 2 : ");
    scanf("%s",c2);
    int i ,j,k=0,m=0;
    while(c1[k]!= '\0'){
        k++;
    }
    while(c2[m]!= '\0'){
        m++;
    }
    for ( i = 0 ; i < m ;i++ ){
        for (j = 0 ; j < k ;j++){
            if (c1[j] == c2[i]){
                c1[j] = '\0';
            }
        }
    }
    for ( i = 0 ; i < k ;i++ ){
        if (c1[i] != '\0') printf("%c",c1[i]);
    }
    */
   /* char c1[11],c2[11];
    printf("Introduceti sirul 1 ");
    scanf("%s",c1);
    printf("introduceti sirul 2 ");
    scanf("%s",c2);
    int v[11];
    int n,m;
    int i=0,j=0;
    while(c1[i]!='\0'){
        i++;
    }
    while(c2[j]!='\0'){
        j++;
    }
    n = i;
    m = j;
    int k = 0;
    for (i = 0 ; i < n ; i++ ){
        for (j = 0 ; j < m;j++){
            if (c1[i] == c2[j]){
                k++; 
        }
            
    }
    printf("%c = %d ",c1[i],k);
    k = 0;
}
    */
   //Cod aparitii unui sir intr-un alt sir
    /* char c1[41],c2[41];
    printf("Introduceti sirul 1 ");
    scanf("%s",c1);
    printf("Introduceti sirul 2 ");
    scanf("%s",c2);
    int k = 0,no = 0,i;
    int n = strlen(c1);
    for (i = 0 ;i < n;i++){
        if (c1[i] == c2[k]){
            {   if (c1[i+1] == c1[i]){
                if (i+1 < strlen(c1)){
                    i = i+1;    
                }
            }
                while((c1[i] == c2[k]) && ((c1[i]!='\0') || (c2[k]!='\0'))) {
                    if ((i<strlen(c1)) && (k<strlen(c2))){
                    i++;
                    k++;
                    }
                }
                
            }
            if (k == strlen(c2)){
                    no++;
                }
            k = 0;
            
    }
     
}
    printf("%d",no);
     */
    /*char c[100];
    printf("Introdceuti sirul");
    scanf("%s",c);
    int i;
    for (i = 0 ; i < strlen(c);i++){
        if (((c[i] >= 65) && (c[i] <= 90)) || ((c[i] >= 97) && (c[i] <= 122))){
           printf("%c",c[i]); 
        }
    }
     */
    
    return 0;
}
