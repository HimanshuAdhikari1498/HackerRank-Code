

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    void swap(int &a,int &b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
  
    Node *lca(Node *root, int v1,int v2) {

		// Write your code here.
        Node *temp=root;
        Node *prev=temp;
        if(v1>v2)
            swap(v1,v2);
        if(v1<=temp->data && v2>=temp->data)
            return root;
        else
        {
            while(temp)
            {
                if(v1<temp->data && v2>temp->data)
                    break;
                else if(v1<temp->data && v2<temp->data)
                {
                    temp=temp->left;
                    if(v1==temp->data || v2==temp->data)
                        break;
                }
                else if(v1>temp->data && v2>temp->data)
                {
                    temp=temp->right;
                    if(v1==temp->data || v2==temp->data)
                        break;
                }
                prev=temp;
            }
        }
        return temp; 
    }

