#include<stdio.h>
#include<stdlib.h>

int front,rear,max;

void enqueue(int data,int arr[]){
    if(front==(rear+1)%max){
        printf("\nqueue is full ");
    return;
    }
    rear=(rear+1)%max;
    arr[rear]=data;
    printf("element %d is successfully enqueued ",data);
    if(front==-1){
        front=0;
    }
    return;
}
int dequeue(int arr[]){
    int data;
    if(front==-1){
        printf("\nqueue is empty ");
    return -1;
    }
    data=arr[front];
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front=(front+1)%max;
     }
    return data;
}
int main(){
    front=-1,rear=-1;
    int x;
    printf("enter size of queue : ");
    scanf("%d",&max);
    int arr[max];
    
    while(1){
        printf("\nenter 1 for enqueue, 2 for dequeue and 0 for exit : ");
        scanf("%d",&x);
        if(x==1){
            int a;
            printf("\nenter element you want to enqueue : ");
            scanf("%d",&a);
            enqueue(a,arr);
        }
        else if(x==2){
           
            
            
                printf("%d is dequeued from the queue ",dequeue(arr));
            }
        
        else{
            exit(0);
        }    
    }
    return 0;
}