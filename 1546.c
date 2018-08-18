#include <stdio.h>

int main(void)
{
    int N; // 과목 수
    double max =0; // 새로운 점수 합
    int d[1001]; // 과목 점수
    double dn[1001]; // 새로운 과목 점수
    double m; // 평균
    int M = 0; // 최댓값
    double cnt =0;
    scanf("%d", &N);
    for(int i =0 ; i<N ;i++)
    {
        scanf("%d", &d[i]);
        if(d[i]>M)
        {
            M = d[i];
        }
    }
    for(int i =0; i<N;i++)
    {
        dn[i] = (double)d[i] / M *100;
        max += dn[i];
    }
    m = (double)max / N;
    printf("%.2lf", m);
    
    return 0;
}
