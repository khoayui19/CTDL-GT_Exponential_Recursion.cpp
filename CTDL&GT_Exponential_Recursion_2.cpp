public class Exponential{

	public static void main(String args[]){
		System.out.println(Exp(5, 3));
	}
	
	public static int Exp(int x, int n) {
		int result;
		int y = x*x;
		if (n == 0)
			return 1;
		else{
			result = Exp(y, n/2);
			if (n%2 == 1){
				result = result*x;
			}
		}
		return result;	
	}
}
