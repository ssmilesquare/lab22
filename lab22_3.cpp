#include<iostream>
#include<string>
#include<set>
//#define REPEATED 0

using namespace std;

//Write function count() here.
int count(int data[], int N){
	set<int> s;
	for(int i=0; i<N; i++){
    	s.insert(data[i]);
	}
	return s.size();
}
	/*int i, j, k, t=0;
	for(i=0; i<N; i++){
        k=1;
        for(j=i+1;j<=N-1;j++){
            if(data[i]==data[j] && data[i]!=REPEATED){
                k++;
                data[j]=REPEATED;
            }
		}
	}
	if(data[i]!=REPEATED){
            if(k>1)t++;
            return data,sizeof(data)/sizeof(int);
    }
}*/

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
