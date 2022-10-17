	int n, t;
	char n1[][11] = { "Ten","Eleven","Twelve","Thirteen","Fourteen","Sixteen","Seventeen","Eighteen","Nineteen" };
	char n2[][10] = { "One","Two","Three","Four","Five","Six","Seven","Eight","Nine" };
	char n3[][10] = { "Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety" };

	printf("Enter a Two Digit Number\n");
	scanf_s("%d", &n);
	if (n<10||n>99||n==0){
		printf("Please Enter the valid Two Digit Number");
	}
	else {
    if (n < 20) {
      t = n % 10;
      printf("%s",n1[t]);
    }
    else if (n >=20){
      t = n % 10;
      int t1 = n / 10;
      if (n % 10 == 0)
      {
        printf("%s", n3[t1 - 2]);
      }
      else {
        printf("%s %s", n3[t1 - 2], n2[t-1]);
      }
    }
	}
