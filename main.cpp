#include <iostream>
void swap(int *a,int *b){
    int t= *a;
    *a=*b;
    *b=t;
}

void bubblesort(int n, int a[]){

    for(int i =0;i < n;i++){
        for(int j = 0; j < n-1;j++){
            if(a[j] > a[j+1]){
               swap(&a[j],&a[j+1]);
            }
        }
    }
    std::cout<<std::endl;
    for(int i = 0;i < n;i++){
        std::cout<<a[i]<<" ";
    }
}
void selectsort(int n,int a[]){

    for(int i=0;i<n-1;i++){
            int min =i;
            for(int j=i+1;j<n;j++){
                if(a[j]<a[min])
                    min=j;
            }
            swap(&a[min],&a[i]);
    }
    std::cout<<std::endl;
    for(int i = 0;i < n;i++){
        std::cout<<a[i]<<" ";
    }
}
void insertsort(int n, int a[]){
    for(int i=1;i<n;i++){
        int k=a[i];
        int j = i-1;
        while(k<a[j] && j>=0 ){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
    std::cout<<std::endl;
    for(int i = 0;i < n;i++){
        std::cout<<a[i]<<" ";
    }
}
int main() {
    int a[100]; //create Array;
    int n; // the number of number in the array
    std::cout<<"Write the number of number in the array";
    std::cin>>n;
    std::cout<<"Write the array";
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::cout<<"Choose a sort. 1). Bubble sort. 2).Select Sort. 3).Insert Sort";
    int k;
    std::cin>>k;
    switch (k) {
        case 1:
            bubblesort(n,a); //Bubble Sort
            break;
        case 2:
            selectsort(n,a); //Select Sort
            break;
        case 3:
            insertsort(n,a); //Insert Sort
    }

}
