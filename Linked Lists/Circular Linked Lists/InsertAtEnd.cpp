class Node {
    public:
    int value;
    Node* next;
    
    Node(int val): value(val), next(nullptr) {}
};

void insertAtEnd(int value) {
    Node* newNode = new Node(value);
    
    if (head == NULL) {
        head = newNode;
        
    } else {
        tail -> next = newNode;
    }
    
    tail=newNode;
    
    
    // Set next of tail to head
    tail -> next = head;
}