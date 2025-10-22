// code which does not print duplicate number or letter using string 

#include<stdio.h> 
#include<string.h>
int main(){
    char str[]="hello";
    int ln= strlen(str);
    int count;
    for(int i=0;i<ln;i++){
        count=0;
    
    for(int j=0;j<i;j++){
        if(str[i]==str[j]){
            count++;
            break;
        }
    }
    if(count==0){
        printf("%c",str[i]);
    }
}
}

// code to identify number of vowles and consonants  
int main()
{
         char s[] = "hello";
         int l = strlen(s);
         int vowel = 0;
         int consonant = 0;
        for (int i = 0; i < l; i++) {
             char c = s[i];
             if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
                 c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
                 vowel++;
             } else {
                 consonant++;
             }
         }
     printf("vowel=%d\n", vowel);
     printf("consonant=%d\n", consonant);
     }


// code for counting frequency 
int main(){
    char str[]="hello";
    int freq[256]={0};
    int ln= strlen(str);
    for(int i=0;i<ln;i++){
        freq[str[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]>0){
            printf("%c:%d\n",i,freq[i]);
        }
    }
}

int main(){
 char str[] = " hello";
    int ln = strlen(str);
    char str2[] = "happy";
    int ln2 = strlen(str2);
    for (int i = 0; i < ln; i++)
    {
        for (int j = 0; j < ln2; j++)
        {

            if (str[i] = str2[j])
            {

                break;
            }
        }
        printf("%c", str[i]);
    }
}

int main(){
char str[] = "hello";
         int ln = strlen(str);
          for (int i = 0; i < ln; i++)
          {
              int count = 0;
              for (int j = 0; j < i;j++){
                   if (str[i] == str[j] )
               break;
               
            }
            if (count == 0)
            {
                 printf("%c", str[i]);
            }
}
}