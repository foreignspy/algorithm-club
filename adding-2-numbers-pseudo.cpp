




// LIST 2 NUMBERS
// pseudo code



current.node->nodehead of returning list;
int carry = 0;

initialize p && q to head of l1 & l2;
loop through lists l1 && l2 until end {
  set x = p.value
  if(p->l1)
     p=0;

  set y = q.value
  if(q->l2)
     q=0;

  set sum = x+y+carry;
  carry = sum/10
  create new node with value of sum % 10
  new node = current.node;
  current.node->next;
  p=p.next;
  q=q.next;

  check if carry == 1 {
    current.next = new listnode(carry);
  }
  return nodehead.next;
}
