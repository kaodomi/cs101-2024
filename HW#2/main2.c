#include <stdio.h>

int main() {
    FILE *fp_in, *fp_out;
    char line[1000];

    // 打开输入文件main2.c
    fp_in = fopen("main2.c", "r");
    if (fp_in == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // 打开输出文件main2.txt
    fp_out = fopen("main2.txt", "w");
    if (fp_out == NULL) {
        perror("Error opening output file");
        fclose(fp_in);
        return 1;
    }

    // 逐行读取main2.c文件并写入main2.txt文件
    while (fgets(line, sizeof(line), fp_in) != NULL) {
        fputs(line, fp_out);
    }

    // 关闭文件
    fclose(fp_in);
    fclose(fp_out);

    printf("Content of main2.c copied to main2.txt\n");

    return 0;
}
