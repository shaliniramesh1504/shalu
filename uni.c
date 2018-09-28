
#include <stdio.h>
int main()
{
    int n,i,j=0,c=0;
    printf("enter the n value");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
    if(arr[i]==arr[j])
{
    printf("\n%d",arr[i]);
    
    c++;
}}}
if(c==0)
{
    printf("unique");
}
else 
{
    printf("not unique");
}
return 0;
}

    
