template <typename T>
class Node
{
	private:
		T value;
		Node* next;
	public:
		Node()
		{
			this->value = 0;
			this->next = NULL;
		}
		Node(T value)
		{
			this->value = value;
			this->next = NULL;
		}
		Node(T val,Node* nxt)
		{
			this->next = nxt;
			this->value = val;
		}
		T getValue()
		{
			return this->value;
		}
		Node* getNext()
		{
			return this->next;
		}
};
