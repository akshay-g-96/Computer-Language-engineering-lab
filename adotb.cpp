import java.io.*;
import java.util.*;
//import java.util.LinkedList;

public class thomp_a_concat_b
{
   public static void main(String[] args)
   {
           Scanner a=new Scanner(System.in);
           System.out.println("\nEnter re:\n");
           String x=a.nextLine();
           char[] regchar=x.toCharArray();
           int count=0;
           int i=0;
           for(char z:regchar)
           {
                   if(z!='.')
                   {
                           count++;
                   }
           }
           char[] y=new char[count];
           for(char z:regchar)
           {
                   if(z!='.')
                   {
                           y[i]=z;
                           i++;
                   }
           }
           count++;
           System.out.println("Number of states="+count);
           System.out.println("Number of variables="+(count-1));
           for(char z:y){
                   System.out.print("\t "+z);

           }
           System.out.println();
           for(int j=0;j<count-1;j++)
           {
                   if(j==0)
                   {
                           System.out.print("->"+j);
                   }
                   else
                   {
                           System.out.print("  "+j);

                   }
                   for(char z:y)
                   {
                           if(y[j]==z)
                           {
                                   System.out.print("\t "+(j+1));
                           }
                           else
                           {
                                   System.out.print("\t-1");
                           }
                   }
                   System.out.println();
           } // if(j==count-2)
                   System.out.print("F "+(count-1));
                   for(char z:y)
                           System.out.print("\t-1");


   }
}
