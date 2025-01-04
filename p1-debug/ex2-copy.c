#include <stdio.h>
#include <string.h>
//copy the string from src to dst

void string_copy(char s[], char d[]){

    if(strlen(d)>strlen(s))
    {
        *(d+strlen(s)) = '\0';
    }// handle situations when d is greater than s
    int i = 0;
    while(s[i] != '\0'){
        d[i] = s[i];
        i++;
    }
}

int main(){
    char src[80] = "red";
    char dst[80] = "orange";
    string_copy(src, dst);
    printf("%s", dst);
    return 0;
}

