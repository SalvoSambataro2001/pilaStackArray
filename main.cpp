using namespace std;
#include <iostream>
#include "stack.h"
#include "coda.h"

int main()
{
	Stack <int> s1 (4);
	s1.pop();
	s1.push(5);
	s1.push(10);
	s1.push(15);
	s1.push(20);
	s1.push(35);
	cout<<s1<<endl;
	cout<<"Estratto l'elemento "<<s1.pop()<<endl;
	cout<<s1<<endl;
	cout<<"Numero elementi stack: "<<s1.getNumEl()<<endl;

	Coda<int> c (3);
	c.dequeue();
	c.enqueue(5);
	c.enqueue(10);
	cout<<c<<endl;
	c.enqueue(15);
	cout<<c<<endl;
	cout<<"Servito l'elemento "<<c.dequeue()<<endl;
	c.enqueue(20);
	c.enqueue(30);
	cout<<"Servito l'elemento "<<c.dequeue()<<endl;
	c.enqueue(30);
	cout<<c<<endl;

}