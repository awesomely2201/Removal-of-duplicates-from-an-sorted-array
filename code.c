void removeDuplicates(int *arr, int *size)
{
  for(int i=0;i<*size;i++)
  {
    for(int j=i+1;j<*size;j++)
    {
      if(*(arr+i)==*(arr+j))
      {
        for(int k=j;k<*size;k++)
        {
          *(arr+k)=*(arr+(k+1));
        }
        *size=*size-1;
        j--;
      }
    }
  }
}
