#include <stdio.h>
#include <string.h>

void sreverse(char* s, int length){
    int n = strlen(s);

    if(n > length)
    {
        printf("Error: Expect Garbled Output! Entered Length is smaller than actual Length\n");
    }

    for(int i=0;i<=(n/2);i++){ // range should be n/2
        char temp = s[i];
        s[i] = s[n-1]; // should use a temp swap swap(s[i], s[i-n-1])
        s[n-1] = temp;
        n--;
    } // exchange with similar position from the end 

    // no need for this logic
    /*while(s_temp[i] != '\0')
    {
        s_temp[i] = s[n];
        n--;
        i++;
    }
    i = 0;
    while(s[i]!='\0')
    {
        s[i] = s_temp[i];
        i++;
    }*/


}

int main(){
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s", s);

    sreverse(s, n);
    printf("%s", s);

}
 
