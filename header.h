#pragma once

//Define Class Node
template <typename T>
class ChainNode {
	friend Chain<T>;
private:
	T data;
	ChainNode<T>* link;
};

//Define Class Chain
template <typename T>
class Chain {
public:
	Chain() { first = 0; }
	~Chain();
	bool IsEmpty() const
	{
		return first == 0;
	}
	int Length() const;
	bool Find(int k, T& x) const;
	int Search(const T& x) const;
	Chain<T>& Delete(int k, T& x);
	Chain<T>& Insert(int k, const T& x);
	void Output(ostream& out) const;
private:
	ChainNode<T>* first; // pointer to first node
	template <typename T>
};
template <typename T>

//Εύρεση k-οστού στοιχείου αλυσίδας (find)
bool Chain<T>::Find(int k, T& x) const
{// Set x to the k'th element in the chain.
// Return false if no k'th; return true otherwise.
	if (k < 1) return false;
	ChainNode<T>* current = first;
	int index = 1; // index of current
	while (index < k && current) {
		current = current->link;
		index++;
	}
	if (current) {
		x = current->data; return true;
	}
	return false; // no k'th element
	template <typename T>
}

template <typename T>

//Αναζήτηση στοιχείου x σε αλυσίδα (search)
int Chain<T>::Search(const T& x) const
{// Locate x. Return position of x if found.
// Return 0 if x not in the chain.
	ChainNode<T>* current = first;
	int index = 1; // index of current
	while (current && current->data != x) {
		current = current->link;
		index++;
	}
	if (current) return index;
	return 0;
}
template <typename T>

//Προσδιορισµός µήκους αλυσίδας (length)
int Chain<T>::Length() const
{// Return the number of elements in the chain.
	ChainNode<T>* current = first;
	int len = 0;
	while (current) {
		len++;
		current = current->link;
	}
	return len;
}
