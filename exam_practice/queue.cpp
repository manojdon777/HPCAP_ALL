#include<iostream>
using namespace std;
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
void enqueue(int data){
	if(rear == MAX - 1){
		cout << "Queue is overflow" << endl;
	}
	else if(front==-1){
		front = rear = 0;
		queue[front] = data;
	}
	else{
		rear++;
		queue[rear] = data;
	}
}
void dequeue(){
	if(front == -1){
		cout << "Queue underflow";
		return;
	}
	else if(front == rear){
		front = rear = -1;
	}
	else{
		for(int i=front; i<=rear; i++)
			queue[i] = queue[i+1];
	}

}
void display(){
	for(int i=front;i <= rear; i++)
		cout << queue[i] << " ";
	rear--;
	cout << endl;
}
int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	display();
	dequeue();
	dequeue();
	dequeue();
	display();
}