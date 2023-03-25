#include<stdio.h>
void main() {

    int score[3] = { 10,12,13 };    //初始化数组
    int find, i;    //定义输入分数以及累加变量
    printf("输入一个成绩:");
    scanf_s("%d", &find);   //输入分数
    for (i = 0; i < 3; i++) //循环遍历
    {
        if (find == score[i]) {
            printf("它是第%d个同学的成绩", i + 1);   //判断是否相等
            break;
        }
        else {
            if (i < 2)
                continue;   //嵌套判断
            else
                printf("他没有相同分数的");
            break;
        }
    }
}