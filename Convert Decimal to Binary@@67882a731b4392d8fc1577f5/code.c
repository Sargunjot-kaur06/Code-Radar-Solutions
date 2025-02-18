#inlcude<stdio.h>
int main() {
    int d,i,bit;
    scanf("%d",&d);
    for(i = n; i >=0; i++)
    {
        bit = (d >> i) & 1;
    }
    if (bit == 1 || i < d)
    {
        printf("%d",bit);
    }
    return 0;

}