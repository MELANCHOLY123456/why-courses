#include <stdio.h>
#include <string.h>

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
