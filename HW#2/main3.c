#include <stdio.h>

int main() {
    FILE *fp_in, *fp_out;
    char line[256];
    int line_count = 0;

    // 打开输入文件 main3.c
    fp_in = fopen("main3.c", "r");
    if (fp_in == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // 统计包含 main() 函数的行数
    while (fgets(line, sizeof(line), fp_in)) {
        line_count++;
        if (strstr(line, "int main()")) {
            break;
        }
    }

    fclose(fp_in);

    // 打开输出文件 main3.txt
    fp_out = fopen("main3.txt", "w");
    if (fp_out == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }

    // 输出包含 main() 函数的行数到输出文件
    fprintf(fp_out, "%d\n", line_count);

    fclose(fp_out);

    printf("Line number of 'int main()' written to main3.txt.\n");

    return 0;
}
