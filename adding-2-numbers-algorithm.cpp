
// ADDING 2 NUMBERS

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//create a listnode head equal to null and make previous null
list_node *head = NULL , *previous = NULL;
//create an int of carry equal to 0
int carry = 0;
//while loop initializing l1 or l2
  // make l1 equal to value of l1 ? and then let l1 point to value :0
  // make l2 equal to value of l2 ? and then let l2 point to value
while (l1 || l2) {
  l1 = l1.value ? l1->value :0
  l2 = l2.value ? l2->value :0

  int temp = l1.value + l1.value + carry;
  carry = temp / 10;
  int value = temp % 10;

  //create a temp int equal to l1 value plus l2 value plus carry
  //make carry equal to temp divided by 10
  //create an int value equal to temp module 10
  list_node* current = new list_node(value);
  if(!head) head = current;
  if(previous) previous->next = current;
  previous = current;

  //make listnode current equal to the new listnode of value
   //create if statement (is not head) then make head equal to current
   //if  (previous) then make previous point to next equal to current
   // make previous equal to current
   l1 = l1? l1->next: NULL;
   l2 = l2? l2->next: NULL;

   //make l1 equal to l1next  : null
   // make l2 equal to l2next : null

}
if(carry > 0) {
  list_node* l = new list_node(carry);
  previous->next = l;
}
return head;
}
