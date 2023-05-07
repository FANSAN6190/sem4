public class Main
{
	public static void main(String[] args) {	
	for(int i=r-1;i>=0;i--){
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
