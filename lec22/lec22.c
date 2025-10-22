#include<stdio.h>
#include<string.h>

// code for removing target matched letter  

int main(){
    char str[]="hello";
    char target='e';
    int j=0;
    char nstr[100];
    int ln = strlen(str);
    for(int i=0;i<ln;i++){
        if(str[i]!=target){
            nstr[j]=str[i];
            j++;
        }
    }
    nstr[j]='\0';
      printf("%s",nstr);
}

int main(){
    char str[]="ababde";
    int ln =strlen(str);
    int freq[256]={0};
    for(int i=0;i<ln;i++){
       freq[str[i]]++;
    }
    for(int i=0;i<ln;i++){
        if(freq[str[i]]==1){
            printf("%c",str[i]);
            break;
        }
    }
}

