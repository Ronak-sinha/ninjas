void swapAlternate(int *arr, int size)
{
    //Write your code here
    int temp=0;
    int n=size/2*2;
    for(int i=0;i<n;i+=2){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}