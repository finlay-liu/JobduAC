#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, x, y, z;
    //freopen("C:\\Users\\SJF\\Desktop\\acm.txt","r",stdin);
    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        x = a * a + b * b - c * c;
        y = a * a + c * c - b * b;
        z = b * b + c * c - a * a;
        if(x == 0 || y == 0 || z == 0)
        {
            printf("ֱ��������\n");
        }
        else if(x > 0 && y > 0 && z > 0)
        {
            printf("���������\n");
        }
        else
        {
            printf("�۽�������\n");
        }
    }
    return 0;
}