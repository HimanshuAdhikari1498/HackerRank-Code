

// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    int c=0;
    SinglyLinkedListNode* temp=head;
    if(position==0)
    {
        head=head->next;
        delete temp; 
    }
    else
    {
        while(c!=position-1)
        {
            //cout<<"temp->data  "<<temp->data;
            temp=temp->next;
            
            c++;
            //cout<<" c = "<<c;
            //cout<<" position = "<<position;
        }
        SinglyLinkedListNode* p=temp->next;
        cout<<temp->data;
        cout<<p->data;
        temp->next=p->next;
        delete p;

    }
    return head;
}

