#include<iostream>
using namespace std;
char start[3][3];
char goal[3][3];

void init_arr(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			start[i][j]='0';
			goal[i][j]='0';	
		}
		start[2][2]='X';
		goal[2][2]='X';
	}
}

void user_inp(char arr[][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
}

int find_X(char arr[][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]=='X'){
				return(i*10+j);
			}
		}
	}
}

int count_corr(){
	int corr=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(start[i][j]==goal[i][j]){
				corr++;
			}
		}
	}
	return corr;
}

void swap(int X,int y){
	int t=start[X/10][X%10];
	start[X/10][X%10]=start[y/10][y%10];
	start[y/10][y%10]=t;	
}
void process(){
	int start_X=find_X(start);
	int goal_X=find_X(goal);
	int correct=count_corr();
	int incorrect=9-correct;
	cout<<start_X<<" "<<goal_X<<" "<<correct<<" "<<incorrect<<endl;
	swap(start_X,21);
	
}

void print_arr(char arr[][3]){
	cout<<"---------"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"---------"<<endl;
}

int main(){
	init_arr();
	
	cout<<"Enter the initial state :"<<endl;
	user_inp(start);
	cout<<"Enter the goal state :"<<endl;
	user_inp(goal);
	process();
	print_arr(goal);
	print_arr(start);
	
}
