int main(){
    
    int x = 5;
    int p = 1;
    
    int i,j;
    
    for(i=1;i<=x;i++)
    {
        p=x*i;
        for(j=i;j<=x;j++)
        {
            p+j;
        }
    }
    
    int j = (x > p)?x:p;

}
