//3. Write a program in Java to print the table of a number received through command line argument, e.g. 
public class Main
{
	public static void main(String[] args) {
		int num=Integer.parseInt(args[0]);
		for(int i=0;i<10;i++){
		    
		    System.out.println(args[0]+" x "+(i+1)+" = "+(num*(i+1)));
		}
	}
}