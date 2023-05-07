//3. Write a program in Java to print the table of a number received through command line argument, e.g. 
public class Main
{
	public static void main(String[] args) {
		int r=4,c=1;
		for(int i=0;i<r;i++){
		    for(int s=1;s<=r-i;s++){
		        System.out.print(" ");
		    }
		    for(int j=0;j<=i;j++){
		         
                System.out.print("* ");
		    }
		    System.out.println();
		}
		
	}
}