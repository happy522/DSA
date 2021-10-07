class Queue {
    Node *head;
    Node *tail;
    int size=0;
	// Define the data members
   public:
    Queue() {
		head=NULL;
        tail=NULL;// Implement the Constructor
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
        return size;
		// Implement the getSize() function
	}

    bool isEmpty() {
        if(size==0){
            return true;
        }
        else{
            return false;
        }
		// Implement the isEmpty() function
	}

    void enqueue(int data) {
        Node *newNode = new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        size++;
		// Implement the enqueue() function
	}

    int dequeue() {
        if(isEmpty()){
            return -1;
        }
        else{
            int ans=head->data;
            Node *a=head;
            head=head->next;
            delete a;
            size--;
            return ans;
        }
        // Implement the dequeue() function
    }

    int front() {
        if(isEmpty()){
            return -1;
        }
        else{
        	return head->data;
        }
        // Implement the front() function
    }
};
