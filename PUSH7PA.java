import java.util.*;
import java.lang.*;
import java.io.*;
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
         Scanner sc=new Scanner(System.in);
         int t=sc.nextInt();
         while(t-->0)
         {
             int n=sc.nextInt();
             int arr[]=new int[n];
             for(int i=0;i<n;i++)
             {                     
                  arr[i]=sc.nextInt();
             }    
             Arrays.sort(arr);
             if(n==1)
             {
                System.out.println(arr[0]);
             }
             else
            {
                int max=0;
                int c=0;
            for (int i=n-1;i>=1;i--)
                {
                    if(arr[i]==arr[i-1])
                    {
                        c++;
                    }
                    else{
                        if(max<arr[i]+c)
                        {
                        max=arr[i]+c;
                        }
                        c=0;
                    }
                }
                System.out.println(max);
            }
        }
    }
}
