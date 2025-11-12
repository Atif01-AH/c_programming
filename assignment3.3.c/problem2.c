#include <stdio.h>
int main (){
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c",&ch);
    ch = tolower(ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='0' || ch=='u'){
        printf("It is a vowel");
    }
    else {
        printf("It is a consonant");
    }
    return 0;
}
