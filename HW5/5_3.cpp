#include <iostream>
#include <string>
using namespace std;

class Node
{
	private:
		int value;
		Node* next;
	public:
		Node(int v, Node* n) : value(v), next(n){}
};

class List
{
	private:
		int len;
		Node* headPtr;
		Node* tailPtr;
	public:
		List(); 
		~List();
		void print() const;
		
		void append(int element);
		void insert(int pos, int element);
		void remove(int element);
		int index(int element) const;
		int count(int element) const;
		void extend(List anotherList);
		void reverse();
		void sort();		
};

void List::append(int element)
{
	len++;
	tailPtr = new Node(element, nullptr);
}

void List::insert(int pos, int element)
{
}

void List::remove(int element)
{

}

int List::index(int element) const
{
}

int List::count(int element) const
{
}

void List::extend(List anotherList)
{
}

void List::reverse()
{
}

void List::sort()
{
}

int main()
{
	string s;
	
	
	return 0;
}
