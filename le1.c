#include <stdio.h>

int main()
{
    int task;
    scanf("%d", &task);
    if(task == 1) {
        
        /* Solution for task 1.*/
    long double tl,re,rd,a;
    char s1,s2;
    int i;
    scanf(" %Lf %Lf %Lf",&tl,&re,&rd);
    scanf(" %d",&i);
    
    while(i!=0)
        {
        scanf(" %c %c %Lf",&s1,&s2,&a);
        if (s1=='D' && s2=='D')
            {
                tl=tl+(a*rd);
            }
        if (s1=='W' && s2=='D')
            {   
                tl=tl-(a*rd);
            }
        if (s1=='D' && s2=='E')
            {
                tl=tl+(a*re);
            }
        if (s1=='W' && s2=='E')
            {   
                tl=tl-(a*re);
            }
            i=i-1;
        }
        printf("Final balance: %.2Lf TL.",tl);

    } else if(task == 2) {
        
        /* Solution for task 2.*/
        char z1,z2;
        float p,x1,y1,x2,y2,x3,y3,x4,y4,ans;
        scanf(" %c",&z1);
        if(z1=='T')
        {
            scanf(" %f",&p);
            scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
            ans=((x1*y1)-(40-x1)*p*y1)+((x2*y2)-(40-x2)*p*y2)+
            ((x3*y3)-(40-x3)*p*y3)+((x4*y4)-(40-x4)*p*y4);
            printf("T result: %.2f points.",ans);
        }
        if(z1=='A')
        {
            scanf(" %c %f",&z2,&p);
            if(z2=='C')
            {
            scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
            ans=((x1*y1)-(30-x1)*p*y1)+((x2*y2)-(30-x2)*p*y2);
            printf("A-C result: %.2f points.",ans);
            }
            if(z2=='O')
            {
            scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
            ans=((x1*y1)-(30-x1)*p*y1)+((x2*y2)-(30-x2)*p*y2);
            printf("A-O result: %.2f points.",ans);
            }
            if(z2=='E')
            {
            scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
            ans=((x1*y1)-(30-x1)*p*y1)+((x2*y2)-(30-x2)*p*y2)+
            ((x3*y3)-(30-x3)*p*y3)+((x4*y4)-(30-x4)*p*y4);
            printf("A-E result: %.2f points.",ans);
            }
        }
    }
    return 0;
}