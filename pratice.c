#include<stdio.h>
void main() {

    int score[3] = { 10,12,13 };    //��ʼ������
    int find, i;    //������������Լ��ۼӱ���
    printf("����һ���ɼ�:");
    scanf_s("%d", &find);   //�������
    for (i = 0; i < 3; i++) //ѭ������
    {
        if (find == score[i]) {
            printf("���ǵ�%d��ͬѧ�ĳɼ�", i + 1);   //�ж��Ƿ����
            break;
        }
        else {
            if (i < 2)
                continue;   //Ƕ���ж�
            else
                printf("��û����ͬ������");
            break;
        }
    }
}