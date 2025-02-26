#include <stdio.h>
int main(){
    char ch[20];
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        if(ch=='a'||ch=='i'||ch=='o'||ch=='u'||ch=='e'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(ch>='0'&&ch<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}