#include<stdio.h>
#include<conio.h>

#define IN 1
#define OUT 0
int main()
{
    int c,n1,nw,nc,state;
    state=OUT;
    n1=nw=nc=0;
    while ((c=getchar()) != EOF){
        ++nc;
        if(c=='\n')
            ++n1;
        if(c==' '||c=='\n'||c=='t')
            state=OUT;
        if(state==OUT){
            state=IN;
            ++nw;
        }
    }
    printf("\a Lines = %d\n Words = %d \n Characters = %d\n",n1, nw, nc);
    getchar();
    return 0;
}
