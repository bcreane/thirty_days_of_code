Node* insert(Node *head,int data)
{
    if (head==NULL) {
        head = new Node(data);
    } else {
        Node* p = head;
        while (p->next != NULL)
            p = p->next;

        p->next = new Node(data);
    }

    return head;
}

