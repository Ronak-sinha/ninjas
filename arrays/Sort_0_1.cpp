void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
    //sort(input,input+size);
    int count=0;
    for(int i=0;i<size;i++){
        if(input[i]==0){
            input[count]=0;
            count++;
        }
    }
    for(int i=count;i<size;i++){
        input[i]=1;
    }
}