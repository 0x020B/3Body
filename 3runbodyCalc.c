#include <stdio.h>
#include <unistd.h>

void msg(char *s){
    puts(s);
    usleep(100042);
}

int main(void)
{
    int j;
    msg("***********************************");
    msg("   \e[32m[INFO]\e[0m   用户ID : weicheng");
    msg("   \e[33m[SYS]\e[0m    计算任务已提交");
    msg("   \e[32m[INFO]\e[0m   任务ID : 89345786");
    msg("   \e[33m[SYS]\e[0m    申请节点 : node00001-node08192");
    msg("   \e[33m[SYS]\e[0m    优先级 : 最高\n");
    msg("\e[34m[STATUS]\e[0m    等待计算资源\n");
    msg("   \e[33m[SYS]\e[0m    资源申请成功");
    msg("   \e[33m[SYS]\e[0m    初始化计算任务.....");
    msg("\e[34m[STATUS]\e[0m    计算已启动\n");
    msg("------------------------");
    msg("  3bodyCalc v 3.12.83");
    for (int i = 0; i<=100; i++){
        printf("  Proc:: ");
        for (j = 0; j <= i; j++)
            printf("%s", "\u2588");
        for (; j<=100; j++)
            printf(" ");
        printf(" %d%%\r", i);
        fflush(stdout);
        usleep(5000);
    }
    msg("\n------------------------");
    msg("   \e[33m[SYS]\e[0m    计算已完成");
}
