#include<stdio.h>
int countEven(int*arr,int size){
	int count = 0;
	int i;
	for(i = 0;i<size;i++){
		if(arr[i] %2 == 0){
			count++;
		}
	}
	return count;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(arr) / sizeof(arr[0]);
	int evenCount = countEven(arr,size);
	printf("So luong so chan trong mang la:%d\n",evenCount);
	return 0;
}
