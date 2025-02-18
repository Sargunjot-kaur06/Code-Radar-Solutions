#inlcude<stdio.h>
int main() {
    int d,i,bit,n;
    scanf("%d",&d);
    for(i = 31; i >=0; i++)
    {
        bit = (d >> i) & 1;
    }
    if (bit == 1 || i < 31)
    {
        printf("%d",bit);
    }
    return 0;

}