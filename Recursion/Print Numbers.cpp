// Print Numbers
// Given is the code to print numbers from 1 to n in increasing order recursively.
// But it contains few bugs that you need to rectify such that all the test cases pass.

void print(int n){
    //write your code here
    if(n!=1){
        print(n-1);
        cout<<n<<" ";
    }
    else
    cout<<n<<" ";
}
