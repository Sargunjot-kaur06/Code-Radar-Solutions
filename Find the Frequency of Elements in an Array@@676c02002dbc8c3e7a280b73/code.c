#include<stdio.h>
int main(){
    int n,i,num;
    scanf("%d",&n);
    
    int a[n],freq[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        freq[i]=-1;
    }

    for(i = 0; i < n; i++){
        int count =1;
    for(int j = i+1; j < n; j++){
        if(a[i] == num){
        count++;
        freq[j] = 0;
    }
    }
    if (freq[i] != 0) {
        freq[i] = count;
    }
    }
    for(i = 0; i < n; i++){
        if(freq[i] != 0){
            printf("%5 %d\n",a[i] freq[i]);
        }
    }
    return 0;
}