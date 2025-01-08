#include <stdio.h>
int main()
{
    char strArr[5][100] = {
        "zhangsan",
        "lisi",
        "wangwu",
        "xiaohu",
        "good man"
    };
    for(int i = 0;i< 5; i++ ){
        char* str =  strArr[i];
        printf("%s\n",str);
    }
    return 0;
}