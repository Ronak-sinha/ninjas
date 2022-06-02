int findUnique(int *arr, int size)
{
    //Write your code here
    int f=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==j)
                j++;
            if(arr[i]==arr[j])
                f=1;
        }
        if(f==0){
            return arr[i];
            break;
        }
        f=0;
    }
}