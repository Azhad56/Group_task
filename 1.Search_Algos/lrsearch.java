class LR
{
    public static int search(int a[],int x)
    {
        int n = a.length;
        for(int i=0;i<n;i++)
        {
            if (a[i]==x)
            {
                return i;
            }
        }
        return -1;
    }
    public static void main(String args[])
    {
        int a[] = {1,2,3,4,5,65,63};
        int x = 5;
        int result = search(a,x);
        if (result == -1)
            System.out.println("Item not found");
        else
            System.out.println("Item found at index"+result);
    }
}
