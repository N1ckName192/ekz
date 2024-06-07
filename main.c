#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    freopen("test.txt", "r", stdin);

    setvbuf(stdin, NULL, _IOLBF, 0);

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), stdin)) {
        if (buffer[0] == '\n') {
            fprintf(stderr, "ошибка: пустая строка\n");
            continue;
        }else{
            printf("введеная строка: %s", buffer);
        }
    }

    fclose(stdin);

    return 0;
}
