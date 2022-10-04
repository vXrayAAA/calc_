
int main()
{
   int num1;
   int num2;
   char operacao;
   int result;

   printf("colocar primeiro num:");
   scanf("%d",&num1);

   printf("colocar segundo num:");
   scanf("%d",&num2);
   
   printf("entrar operacao:");
   scanf(" %c",&operacao);

   switch(operacao)
   {
      case '+':
       result=num1+num2;         
      break;
      case '-':
       result=num1-num2;   
      break;
      case '*':
       result=num1*num2;      
      break;
      case '/':
       result=num1/num2;       
      break;
      default:printf("No result");
   }
   printf("seu resultado:");
   printf("%d",result);
   return 0;
}
