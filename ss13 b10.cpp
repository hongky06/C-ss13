#include<stdio.h>
void nhapsophantu(void){
    printf("\n1. nhap so luong phan tu va gia tri ");
	printf("\n2. in cac gia tri trong phan tu ");
	printf("\n3. them mot gia tri vao vi chi tri dinh ");	
	printf("\n4. sua mot gia tri vao vi chi tri dinh ");
	printf("\n5. xoa mot gia tri vao vi chi tri dinh ");
	printf("\n6. sap xep cac phan tu  ");
	printf("\n7. tim kiem phan tu chi dinh ");
	printf("\n8. thoat ");
	
}

void xuatham (int rows,int arr[]){
   for(int i = 0 ;i < rows ;i++){
	   printf("%d\t",arr[i]);
    }	
}
 
void themphantu (int x, int y , int rows , int arr[]){
	printf("phan tu ban muon them: ");
	    scanf("%d",&x);
		printf("vi tri ban muon them: ");
	    scanf("%d",&y);
	    	for(int i = rows ;i > y;i--){
                arr[i] = arr[i - 1]; 
            }
            arr[y] = x;
            rows++;
		for(int i = 0 ;i < rows ;i++){
		   	    printf("%d\t",arr[i]);
	    }
}
 
 void suaPhantu (int a,int b, int rows , int arr[]){
 	printf("phan tu ban muon sua: ");
	    scanf("%d",&a);
		printf("vi tri muon sua: ");	
	    scanf("%d",&b);
	    arr[b-1]=a;
	    printf("ham sau khi sua ");
	   	    for(int i = 0 ;i < rows ;i++){
		   	    printf("%d\t",arr[i]);
		    }
 }
 
  void xoaPhantu (int g, int rows , int arr[] ){
  	printf("vi tri muon xoa: ");	
	    scanf("%d",&g);	
	    for (int i = g -1  ; i < rows-1 ; i++){
	    	arr[i]=arr[i+1];
		}
		rows--;
	     printf("ham sau khi xoa:  ");
	   	    for(int i = 0 ;i < rows ;i++){
		   	    printf("%d\t",arr[i]);	
		   }
  }
 
   void sapxepcacphantu ( int rows , int arr[]){
   	int chonsapxep;   
		printf ("\n1. tang dan ");
	   	printf ("\n2. giam dan "); 
	   	printf ("\n. ban chon:  ");
		scanf("%d",&chonsapxep);
		   
		switch (chonsapxep) {
		
		  case 1 : 
		   for(int i = 0 ;i < rows-1 ; i++){
   	    	for (int j = 0 ; j < rows-i-1 ; j++ ){
   	    		if(arr[j]>arr[j+1]){
   	    			int temp = arr[j];
   	    			arr[j]=arr[j+1];
   	    			arr[j+1 ] = temp;
				   }
			   }
		   }
		printf("mang tang dan");
   	     for(int i = 0 ;i < rows ;i++){
	     printf("%d\t",arr[i]);
         }
           break;
         case 2:
         	for(int i = 0 ;i < rows-1 ; i++){
   	    	     for (int j = 0 ; j < rows-i-1 ; j++ ){
   	    	     	if (arr[j]< arr[j+1]){
   	    	     		int tem = arr[j];
   	    	     		arr[j]=arr[j+1];
   	    	     		arr[j+1]= tem;
						}
                 }
            }
         		printf("mang giam dan");
   	     		for(int i = 0 ;i < rows ;i++){
	     		printf("%d\t",arr[i]);
      	   		}
         	break;  	
          }
 }
 
        void timKiem (int rows , int arr[]){
        int lua_chon, sobanchon;
        printf("so ban muon tim: ");
        scanf("%d",&sobanchon);
		printf ("\n1. tim kiem tuyen tinh ");
	   	printf ("\n2. tim kiem nhi phan "); 
	   	printf ("\n. ban chon:  ");
		scanf("%d",&lua_chon);	
	     switch(lua_chon){
	     	case 1:
	     	int i; 
				 for(i = 0 ; i < rows ; i++){
	     			if(sobanchon == arr[i]){
	     				break;
					 }
				 }
			 	printf("\n so co trong phan tu");
	     		printf("\n vi tri: %d",i);
	     		
	     		break;
	     	case 2:
	     	int batdau=0;
			 int mid;
			 while(batdau<=rows){
			 	mid = (batdau+rows)/2;
			 	if(sobanchon==arr[mid]){
			 		break;
				 }else if(sobanchon > arr[mid] ){
				 	batdau=mid+1;
				 }else{
				 	rows=mid-1;
				 }
			 }	
	     		printf("\n so co trong phan tu");
	     		printf("\n vi tri: %d",i);	
	     	
		 }
	          
}
	
 
 
 
 
 

int main(){
int chon;
int rows;
int arr[100];
int x,y,a,b,g;
    do {
    nhapsophantu();
    printf("\n ban chon: "); 
	scanf("%d",&chon);
       switch (chon){
    	case 1:
		printf("hay nhap so luong ham: ");
		scanf("%d",&rows);
		    for(int i = 0 ;i < rows ;i++){
		   	    printf("[%d] = ",i);
		   	    scanf("%d",&arr[i]);
		        }
    	break;
          
        case 2:
          	xuatham (rows,arr);
		break;
	   
	    case 3:
	    	themphantu ( x, y , rows ,arr);
		break; 
	    case 4:
	    	suaPhantu (a,b, rows ,arr);
	    break;
	   
	    case 5:
			xoaPhantu (g,  rows ,arr );
	    break;
	    
	    case 6:
	    	sapxepcacphantu ( rows , arr);
	    break; 
	   
	    case 7:
	       	timKiem ( rows , arr);	
	    break;
	   	
	   
	   
	   
	   
	   
		}//switch	
    
		
		
}while (chon!=8);
    return 0;
}
