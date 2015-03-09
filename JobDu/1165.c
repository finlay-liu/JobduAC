// http://ac.jobdu.com/problem.php?pid=1164
#include <stdio.h>

int main()
{
    int A[9][9], B[9][9];
    int aa, ab, ba, bb, i, j, flag;

    //freopen("sample2.in","r",stdin);
    while(scanf("%d", &aa) != EOF)
    {
		ab = ba = bb = aa;
        for(i = 0; i < aa; i++)
            for(j = 0; j < ab; j++)
                scanf("%d", &A[i][j]);

        for(i = 0; i < ba; i++)
            for(j = 0; j < bb; j++)
                scanf("%d", &B[i][j]);

        flag = 1;

        // 0
        if(aa == ba && ab == bb)
        {
            for(i = 0; i < ba; i++)
                for(j = 0; j < bb; j++)
                    if(A[i][j] != B[i][j])
                        flag = 0;
            if(flag == 1)
            {
                printf("0\n");
                continue;
            }
        }
        flag = 1;
        // 90
        if(aa == bb && ab == ba)
        {
            for(i = 0; i < aa ; i++)
                for(j = 0; j < ab; j++)
                    if(A[i][j] != B[j][aa - 1 - i])
                        flag = 0;
            if(flag == 1)
            {
                printf("90\n");
                continue;
            }
        }
        flag = 1;
        // 180
        if(aa == ba && ab == bb)
        {
            for(i = 0; i < aa ; i++)
                for(j = 0; j < ab; j++)
                    if(A[i][j] != B[aa - 1 - i][ab - 1 - j])
                        flag = 0;
            if(flag == 1)
            {
                printf("180\n");
                continue;
            }
        }
        flag = 1;
        // 270
        if(aa == bb && ab == ba)
        {
            for(i = 0; i < aa ; i++)
                for(j = 0; j < ab; j++)
                    if(A[i][j] != B[ab - 1 - j][i])
                        flag = 0;
            if(flag == 1)
            {
                printf("270\n");
                continue;
            }
        }
        printf("-1\n");
    }
    return 0;
}