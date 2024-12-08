#include<stdio.h>
int main(){
    int n, m;
    char cha[40];
    FILE *fp;

    fp=fopen("check.txt", "r");
    fscanf(fp, "%d %s %d", &n, cha, &m);
    printf("%d %s %d", n, cha, m);


}