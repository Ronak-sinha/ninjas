void arrange(int *arr, int n)
{
    //Write your code here
    int a=1,b;
    if(n%2==0)
        b=n;
    else
        b=n-1;
    for(int i=0;i<n;i++){
        if(a<=n){
            arr[i]=a;
            a+=2;
        }
        else{
            arr[i]=b;
            b-=2;
        }
    }
}