#include <stdio.h>
int main()
{
    char str[100];
    scanf("%s", str);
    printf("接收到的字符串为:%s",str);
    char* p = str;
    while(1){
        if(*p == '\0'){
            break;
        }
         printf("接收到为:%c\n",*p);
         p = p + 1;
    }
    return 0;
}
