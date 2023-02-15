Node* reverse(Node* &head){

    Node* prevptr =NULL;
    Node* currptr =head;
    Node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }

    return prevptr;

}