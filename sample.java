class check
{
public static void main(String[] args)
{
int input;
Scanner sc = new Scanner(System.in);
input = sc.nextInt();
if(input<0)
System.out.print("Invalid Input");
else if(input%2==0)
System.out.print("Even");
else
System.out.print("Odd");
}
}