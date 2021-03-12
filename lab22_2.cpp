#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
	list<string>::iterator i;
	for( i = s.begin(); i != s.end(); i++){
		cout << *i << " ";
	}		
	cout << "\n";	
}

int main(){
	
	list<string> line_up;
	list<string>::iterator loc;
	
	line_up.push_back("Alice");
	line_up.push_back("Bob");
	
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Oscar");
	
	//Write your code here
	line_up.push_back("Luffy");
	line_up.push_back("Sanji");
	line_up.push_back("Nami");
	line_up.remove("Alice");
	line_up.remove("Oscar");

	loc = find(line_up.begin(),line_up.end(),"Sanji");
	line_up.insert(loc,"Narutu");

	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Prayath");

	loc = find(line_up.begin(),line_up.end(),"Prayath");
	line_up.insert(loc,"Tony");

	line_up.remove("Bob");
	line_up.remove("Tony");
	line_up.remove("Prayath");
	line_up.remove("Luffy");

	printList(line_up);
		
	return 0;
}
