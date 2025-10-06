#include <stdio.h>
#include <string.h>

/*
*描述：从指定的流 stream 读取一行，并把它存储在str所指向的字符串内。当读取(n-1)个字符时，或者读取到换行符时，或者到达文件末尾时，它会停止
*
*参数：
*   [in]  str： 缓冲区，用来存放要读取的字符串;
*   [in]  n：   要读取的最大字符数（包括最后的空字符）,通常是使用以 str 传递的数组长度;
*   [in]  stream：文件指针

句柄;
*
*返回值：如果成功，该函数返回读取到的数据，内容和 str 缓冲区数据一样。如果到达文件末尾或者没有读取到任何字符，str 的内容保持不变，并返回一个空指针。如果发生错误，返回一个空指针
*/

// char *fgets(char *str, int n, FILE *stream);

int main(int argc, char const* argv[]) {
    char username[101];
    int length;
    if (fgets(username, sizeof(username), stdin) == NULL) {
        return 1;
    }
    length = strlen(username);
    if (username[length - 1] == '\n') {
        username[length - 1] = '\0';
        length--;
    }
    printf("%d\n", length);
    if (length > 20) {
        printf("\"%.*s\"", 20, username);
    }
    else {
        printf("\"%s\"", username);
    }
    return 0;
}
