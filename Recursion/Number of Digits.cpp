// Number of Digits
// Given the code to find out and return the number of digits present in a number recursively.
// But it contains few bugs, that you need to rectify such that all the test cases should pass.

int count(int n){
    //write your code here
    if(n<1)
        return 0;
    else {
        int a=count(n/10);
        return a+1;
    }
}
