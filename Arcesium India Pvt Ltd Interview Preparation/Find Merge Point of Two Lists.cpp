int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
 
    SinglyLinkedListNode* ptr1 = head1, *ptr2 = head2;
    int lengthOfList1 = 0, lengthOfList2 = 0, difference;
 
    while(ptr1!=NULL) {
        ptr1 = ptr1->next;
        lengthOfList1++;
    }
 
    while(ptr2!=NULL) {
        ptr2 = ptr2->next;
        lengthOfList2++;
    }
  
    ptr1 = head1;
    ptr2 = head2;
 
    if(lengthOfList1>lengthOfList2) {
        difference = lengthOfList1 - lengthOfList2;
        while(difference--) {
            ptr1 =  ptr1->next;
        }
    }
    
    else if(lengthOfList2>lengthOfList1) {
        difference = lengthOfList2 - lengthOfList1;
        while(difference--) {
            ptr2 =  ptr2->next;
        }
    }
 
    while(ptr1!=NULL && ptr2!=NULL) {
 
        if(ptr1==ptr2) {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}

