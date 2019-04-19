#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int i = 0;
    char bar[102];
    memset(bar, '\0', sizeof(bar));
    const char *lable="|/-\\";
    for(; i <= 100; i++){
        bar[i] = '*';
        printf("[%-101s][%d%%][%c]\r", bar, i, lable[i%4]);
        fflush(stdout);
        usleep(100000);
    }
    printf("\n");
}
