int pairSum(int *input, int size, int x)
{
	//Write your code here
    int sum=0;
    int i=0,j;
    while(i<size){
        j=i+1;
        while(j<size){
            if(input[i]+input[j]==x)
                sum++;
            j++;
        }
        i++;
    }
    return sum;
}