public static int RainWater(int[] arr, int size) {
int water = 0;
int[] leftHigh = new int[size];
int[] rightHigh = new int[size];
int max = arr[0];
leftHigh[0] = arr[0];
for (int i = 1; i < size; i++) {
if (max < arr[i])
max = arr[i];
leftHigh[i] = max;
}
max = arr[size - 1];
rightHigh[size - 1] = arr[size - 1];
for (int i = (size - 2); i >= 0; i--) {
if (max < arr[i])
max = arr[i];
rightHigh[i] = max;
}
for (int i = 0; i < size; i++)
water += Math.min(leftHigh[i], rightHigh[i]) - arr[i];
System.out.println("Water : " + water);
return water;
}
