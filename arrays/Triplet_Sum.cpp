int tripletSum(int *input, int size, int x)
{
	//Write your code here
    int sum=0;
    int i=0,j,k;
    while(i<size){
        j=i+1;
        while(j<size){
            k=j+1;
            while(k<size){
                if(input[i]+input[j]+input[k]==x)
                	sum++;
                k++;
            }
            j++;
        }
        i++;
    }
    return sum;
}