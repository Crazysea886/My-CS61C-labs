#include <stddef.h>
#include "ll_cycle.h"

typedef struct list{
    struct list *next;
}L;

int ll_has_cycle(node *head) {// 0 express here no circle 1 express here is a circle at least
    /* your code here */
    L *slow = head;
    L *fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return 1;
        }
    }
    return 0;
}

//if go deeper,it can give the start point of the circle
List* ll_has_cycle(node *head){// NULL express here no circle else the point is returned is the start of the circle
    L *slow = head;
    L *fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            slow = head;
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
    return 0;
}
