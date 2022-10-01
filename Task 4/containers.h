
template <class T>
class MyList 
{
private:

	struct Node
	{
		T data;
		Node* left;
		Node* right;
	};

	Node* first;
	Node* last;


public:
	MyList(){}

	void PushBackNode(T data) 
	{
		if ((first == nullptr) && (last == nullptr))
		{
			first = last = new Node{data, nullptr, nullptr };
			return;
		}
		if (first == last) 
		{
			last = new Node{ data, nullptr, nullptr };
			first->right = last;
			last->left = first;
			return;
		}
		Node* new_node = new Node{ data ,last, nullptr };
		last->right = new_node;
		last = new_node;
	}

	void PushFrontNode(T data) 
	{
		if ((first == nullptr) && (last == nullptr))
		{
			first = last = new Node{ data, nullptr, nullptr };
			return;
		}
		if (first == last)
		{
			first = new Node{ data, nullptr, nullptr };
			last->left = first;
			first->right = last;
			return;
		}
		Node* new_node = new Node{ data ,nullptr, first };
		first->left = new_node;
		first = new_node;
	}

	T PopFrontNode() 
	{
		if (IsClear()) 
		{
			throw "Error! List is empty!";
		}
		else 
		{
			Node* temp_ = first;
			first->right->left = nullptr;
			T temp = first->data;
			first = temp_->right;
			delete temp_;
			return temp;
		}
	}




	bool IsClear() 
	{
		if ((first == nullptr) && (last == nullptr)) 
		{
			return true;
		}
		return false;
	}

};