#include <stdio.h>

int main(int argc, char *argv[]) {
    // 检查命令行参数的数量
    // argc 总是至少为 1，因为第一个参数是程序本身的名称
    if (argc < 2) {
        // 如果没有提供额外的命令行参数（即没有提供迷宫名）
        printf("Empty maze name, please entry again\n");
        return 1; // 使用非零值退出表示出现了错误
    }

    // 如果提供了迷宫名，程序将执行其他操作
    // 例如：加载和处理迷宫文件
    printf("Loading maze from file: %s\n", argv[1]);

    // 正常退出
    return 0;
}
