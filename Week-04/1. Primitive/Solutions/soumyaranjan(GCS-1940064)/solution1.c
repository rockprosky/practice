int simpleArraySum(int ar_count, int* ar) {
    int sum=0;
    for(int i=0;i<ar_count;i++)
    {
        sum=sum+*ar;
        ar++;
    }
     return sum;
}
