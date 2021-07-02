void swap_max(int arr[], int l, int position){
  int flag = 0; 
 int max = position;
   for(int i = position ; i < l; i++){
     if( arr[i] > arr[max] ){
       max = i;
      }
    }
     flag = arr[max];
     arr[max] = arr[position];
     arr[position] = flag;
  
   }

void ssort(int arr[], int l){
   for(int i = 0; i<l ; i++){
     swap_max(arr,l,i);
   }
   for(int i = 0; i<l ; i++){
   printf("| %i |",arr[i]);
  }
  printf("\n");
}
