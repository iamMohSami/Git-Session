#include<stdio.h>
int *insert(int*a,int data,int place,int n){
    int i;
    for(i=n;i>place;i--){
        *(a+i+1)=NULL ;
        *(a+i+1)=*(a+i) ;
        *(a+i)=NULL ;
        *(a+i)=*(a+i-1) ;
    }
    *(a+place)=data ;
    return a ;
}

int main() {
    int arr[10]={1,2,61,45,6} ;
    int i ;
    int * p ;
    p=insert(arr,48,1,5) ;
    for(i=0;i<5;i++) {
        printf("%d \t",*(p+i)) ;
    }
} 
/*
#include<stdio.h>
int*del_element(int a[],int index,int n) {
    int i ;
    for(i=0;i<n-1;i++){
        if(i>=index){
            a[i]=a[i+1] ;
        } 
    }
return a ;
}

int main(){
    int arr[10]={1,2,3,4,5} ;
    int*p=del_element(arr,3,5) ;
    for(int i=0;i<4;i++){
        printf("%d \t",*(p+i)) ;
    }
}  */
/*
#include<stdio.h>
int*upd(int*a,int data,int place){
    *(a+place)=data ;
    return a ;
}

int main(){
    int arr[10]={7,8,6,5} ;
    int i ;
    int *p=upd(arr,26,1);
    for(i=0;i<4;i++){
        printf("%d \t",*(p+i)) ;
    }
}  */
/**/
