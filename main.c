#include <stdlib.h>
#include <stdio.h>

char msg1[6] = "civic";
char msg2[7] = "wiliki";
char msg3[40];
char msg_yes[7] = ": yes\n";
char msg_no[6] = ": no\n";

void display_result(char msg[], int result)
{
    printf("%s",msg);
    if (result==1) {
        printf("%s",msg_yes);
    }
    else {
        printf("%s",msg_no);
    }
}

int msg_length(char msg[])
{
    int length=0;
    while (msg[length] != '\0') {
        length++;
    }
    return length;
}

int palindrome(char msg[], int length) {
    for(int i = 0; i<=length; i++) {
        if( msg[i] != msg[length-i-1] ) {
            return 0;
        }
    }
    return 1;
}

void main()
{
    int length = msg_length(msg1);
    int result = palindrome(msg1, length);
    display_result(msg1, result);

    length = msg_length(msg2);
    result = palindrome(msg2, length);
    display_result(msg2, result);

    exit(0);
}




