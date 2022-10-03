
template <typename T>
class MyList 
{
private:

	template <typename T>
	struct Node
	{
		T data;
		Node* left;
		Node* right;
		Node(T data = T(), Node* left = nullptr, Node* right = nullptr) 
		{
			this->data = data;
			this->left = left;
			this->right = right;
		}
	};

	Node<T>* first;
	Node<T>* last;
	int Size;


public:

	T& operator[](const int index);

	int GetSize() { return Size; }

	MyList();

	~MyList();

	void PushBackNode(T data);

	void PushFrontNode(T data);

	T& PopFrontNode();

	T& PopBackNode();

	bool IsClear();

	void Clear();


};

template <typename T>
MyList<T>::MyList()
{
	Size = 0;
	first = nullptr;
	last = nullptr;
}

template <typename T>
MyList<T>::~MyList() 
{
	Clear();
}

template <typename T>
void MyList<T>::Clear() 
{
	while (Size!=0) 
	{
		PopFrontNode();
	}
}

template <typename T>
bool MyList<T>::IsClear() 
{
	if ((first == nullptr) && (last == nullptr))
	{
		return true;
	}
	return false;
}

template <typename T>
void MyList<T>::PushBackNode(T data) 
{
	if ((first == nullptr) && (last == nullptr))
	{
		first = last = new Node<T>{ data, nullptr, nullptr };
		Size++;
		return;
	}
	if (first == last)
	{
		last = new Node<T>{ data, nullptr, nullptr };
		first->right = last;
		last->left = first;
		Size++;
		return;
	}
	Node<T>* new_node = new Node<T>{ data ,last, nullptr };
	last->right = new_node;
	last = new_node;
	Size++;
}

template <typename T>
void MyList<T>::PushFrontNode(T data)
{
	if ((first == nullptr) && (last == nullptr))
	{
		first = last = new Node<T>{ data, nullptr, nullptr };
		Size++;
		return;
	}
	if (first == last)
	{
		first = new Node<T>{ data, nullptr, nullptr };
		last->left = first;
		first->right = last;
		Size++;
		return;
	}
	Node<T>* new_node = new Node<T>{ data ,nullptr, first };
	first->left = new_node;
	first = new_node;
	Size++;
}


template <typename T>
T& MyList<T>::PopFrontNode() 
{
	if (IsClear())
	{
		throw "Error! List is empty!";
	}
	else if (first == last)
	{
		T temp = first->data;
		delete first;
		Size--;
		return temp;
	}
	else
	{
		Node<T>* temp_ = first;
		first->right->left = nullptr;
		T temp = first->data;
		first = temp_->right;
		delete temp_;
		Size--;
		return temp;
	}
}

template <typename T>
T& MyList<T>::PopBackNode()
{
	if (IsClear())
	{
		throw "Error! List is empty!";
	}
	else if (first == last)
	{
		T temp = first->data;
		delete first;
		delete last;
		Size--;
		return temp;
	}
	else
	{
		Node<T>* temp_ = last;
		last->left->right = nullptr;
		T temp = last->data;
		last = temp_->left;
		delete temp_;
		Size--;
		return temp;
	}
}


template <typename T>
T& MyList<T>::operator[](const int index) 
{
	if (index >= Size) 
	{
		throw "Out of range exception!";
	}
	int iter = 0;
	if (index < Size / 2) 
	{
		Node<T>* currNode = first;
		while (currNode!= nullptr) 
		{
			if (iter == index)
			{
				return currNode->data;
			}
			currNode = currNode->right;
			iter++;
		}
	}
	else 
	{
		iter = Size - 1;
		Node<T>* currNode = last;
		while (currNode != nullptr)
		{
			if (iter == index)
			{
				return currNode->data;
			}
			currNode = currNode->left;
			iter--;
		}
	}
}
