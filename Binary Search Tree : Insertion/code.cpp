

/*
Node is defined as 

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    Node * insert(Node * root, int data) {
        Node * p=new Node(data);
        if(root==NULL)
        {
            root=p;
        }
        else
        {
            Node * temp=root;
            Node * prev;
            while(temp)
            {
                prev=temp;
                if(data<temp->data)
                {
                    temp=temp->left;
                }
                else if(data>temp->data)
                {
                    temp=temp->right;
                }
            }
            if(data<prev->data)
                prev->left=p;
            else
                prev->right=p; 
        }
        return root;
    }

