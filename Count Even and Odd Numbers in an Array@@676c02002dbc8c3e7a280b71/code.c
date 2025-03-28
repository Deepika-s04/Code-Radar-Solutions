// Your code here...
int N;
int arr[N];
int evencount = 0,oddcount = 0;
scanf("%d",&N);
for(int i = 0;i<N;i++){
    scanf("%d ",arr[i]);
}
for(int i = 0;i<N;i++){
    if(arr[i]%2==0){
        evencount++;
    }else{
        oddcount++;
    }
}
printf("%d %d \n",evencount,oddcount);