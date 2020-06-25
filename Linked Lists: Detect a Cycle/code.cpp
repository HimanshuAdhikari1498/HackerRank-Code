/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

#include <bits/stdc++.h>
using namespace std;
bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    map<Node*,int> r;
    if(head==NULL)
        return false;
    else
    {
        Node* temp=head;
        r.insert(pair<Node*,int>(temp,1));
        temp=temp->next;
        while(temp)
        {
            if(r.find(temp)==r.end())
            {
                r.insert(pair<Node*,int>(temp,1));
                temp=temp->next;
            }
            else
                return true;
        }
    }
    return false;
}
