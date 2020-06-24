

/* 
The structure of the node is

typedef struct node {

	int freq;
    char data;
    node * left;
    node * right;
    
} node;

*/


void decode_huff(node * root, string s) {
    node * temp=root;
    string r="";
    int i=0,flag=0;
    while(s[i]!='\0')
    {
        if(s[i]=='0')
        {
            temp=temp->left;
            if(temp->left==NULL && temp->right==NULL)
            {
                flag=1;
                //cout<<"\nLeft temp->data :: "<<temp->data;
                r=r+temp->data;
            }
            else
                i++;
        }
        else if(s[i]=='1')
        {
            temp=temp->right;
            if(temp->left==NULL && temp->right==NULL)
            {
                flag=1;
                //cout<<"\nRight temp->data :: "<<temp->data;
                r=r+temp->data;
            }
            else
                i++;
        }
        if(flag==1)
        {
            temp=root;
            i++;
            flag=0;
        }
    }
    cout<<r;
}

