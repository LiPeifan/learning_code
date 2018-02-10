#include <stdio.h>
#include <string.h>

int main(void)
{
        char word[20];
        printf("please enter a word:\n");
        scanf("%s", word);
        for(int n = strlen(word); n >= 0; n--)
                printf("%c", word[n]);
        printf("\n");
        return 0;
}
