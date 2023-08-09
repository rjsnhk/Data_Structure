#include<bits/stdc++.h>
using namespace std;
int main(){
	
	//////deletion
	int pos;
	int a[]={1,2,4,5,6,7};
	int size=sizeof(a)/sizeof(int);
//	cout<<"enter the posn"<<endl;
//	cin>>pos;
//	if(pos<=0 || pos>size){
//		cout<<"invalid";
//	}
//	else{
//		for(int i=pos-1;i<=size-1;i++){
//			a[i]=a[i+1];
//		}
//		
//		size--;
//	}


/////for only last
     //size--;
     
//for first
for(int i=0;i<size-1;i++){
			a[i]=a[i+1];
		}
		
		size--;

	for(int i=0;i<size;i++){
	 
	cout<<a[i]<<" "; 
	
}
	
	return 0;
}
