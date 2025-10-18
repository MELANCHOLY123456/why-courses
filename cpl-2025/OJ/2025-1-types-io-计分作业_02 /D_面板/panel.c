#include <stdio.h>
#include <string.h>

int main() {
    int W;
    scanf("%d", &W);
    getchar();

    char id[100], username[100], email[100];
    scanf("%[^,],%[^,],%s", id, username, email);

    char id_trunc[W + 1], username_trunc[W + 1], email_trunc[W + 1];
    strncpy(id_trunc, id, W);
    id_trunc[W] = '\0';
    strncpy(username_trunc, username, W);
    username_trunc[W] = '\0';
    strncpy(email_trunc, email, W);
    email_trunc[W] = '\0';

    char label_id[] = "ID";
    char label_username[] = "Username";
    char label_email[] = "Email";
    char label_id_trunc[W + 1], label_username_trunc[W + 1], label_email_trunc[W + 1];
    strncpy(label_id_trunc, label_id, W);
    label_id_trunc[W] = '\0';
    strncpy(label_username_trunc, label_username, W);
    label_username_trunc[W] = '\0';
    strncpy(label_email_trunc, label_email, W);
    label_email_trunc[W] = '\0';

    printf("| %-*s | %-*s |\n", W, label_id_trunc, W, id_trunc);
    printf("| %-*s | %-*s |\n", W, label_username_trunc, W, username_trunc);
    printf("| %-*s | %-*s |\n", W, label_email_trunc, W, email_trunc);

    return 0;
}
