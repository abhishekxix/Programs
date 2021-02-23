class a2DArray
{
    public static void main(String[] args) 
    {
      int a[][] = new int [4][4];
      int i, j;
      for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j] = i*j;
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            System.out.print(a[i][j] + " ");
        } System.out.println();
    }
    }
}