#include<stdio.h>
#include<string.h>

int main()
{
    int test_case_no;
    scanf("%d\n", &test_case_no);

    for (int i = 0; i <test_case_no; i++)
    {
        char a[101];
        int last, num_of_char;
        scanf("%s", a);
        //num_of_char = strlen(a);
        int i = 0;
        //alternative
        while(a [i] = '\0')
            i++;



        //*/

        if (num_of_char>10)
            printf("%c%d%c\n", a[0], num_of_char - 2, a[num_of_char-1]);
        else printf("%s\n", a);
    }


}
