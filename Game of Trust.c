int main() {
    int n,m,a;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&a);
        int count = 0;
        for(int j =0;j<a;j++){
            scanf("%d",&m);
            if(m==1){
                count++;
            }
        }
        printf("%d ""%d",count*3,-1*count);
    }
    return 0;
}
