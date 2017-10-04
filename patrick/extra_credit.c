// Linter tutorial: http://www.zentut.com/c-tutorial/c-linked-list/

typedef struct node {
  int data;
  struct node* next;
};

node* head;

node* create(int data, node* next) {
  node* new_node = (node*)malloc(sizeof(node));
  if(new_node == NULL) {
    printf("Error creating a new node.\n");
    exit(0);
  }
  new_node->data = data;
  new_node->next = next;

  return new_node;
}

node* prepend(node* head,int data) {
  node* new_node = create(data,head);
  head = new_node;
  return head;
}

typedef void (*callback)(node* data);

void traverse(node* head,callback f) {
  node* cursor = head;
  while(cursor != NULL) {
    f(cursor);
    cursor = cursor->next;
  }
}

int count(node *head) {
  node *cursor = head;
  int c = 0;
  while(cursor != NULL) {
    c++;
    cursor = cursor->next;
  }
  return c;
}

node *cursor = head;
while(cursor->next != NULL)
  cursor = cursor->next;

node* new_node =  create(data,NULL);
cursor->next = new_node;

node* append(node* head, int data) {
  /* go to the last node */
  node *cursor = head;
  while(cursor->next != NULL)
    cursor = cursor->next;

  /* create a new node */
  node* new_node =  create(data,NULL);
  cursor->next = new_node;

  return head;
}

node *cursor = head;
while(cursor != prev)
  cursor = cursor->next;

node* new_node = create(data,cursor->next);
cursor->next = new_node;

/*
    insert a new node after the prev node
*/
node* insert_after(node *head, int data, node* prev) {
  /* find the prev node, starting from the first node*/
  node *cursor = head;
  while(cursor != prev)
    cursor = cursor->next;

  if(cursor != NULL) {
    node* new_node = create(data,cursor->next);
    cursor->next = new_node;
    return head;
  } else {
    return NULL;
  }
}

node* insert_before(node *head, int data, node* nxt) {
  if(nxt == NULL || head == NULL)
    return NULL;

  if(head == nxt) {
    head = prepend(head,data);
    return head;
  }

  /* find the prev node, starting from the first node*/
  node *cursor = head;
  while(cursor != NULL) {
    if(cursor->next == nxt)
      break;
    cursor = cursor->next;
  }

  if(cursor != NULL) {
    node* new_node = create(data,cursor->next);
    cursor->next = new_node;
    return head;
  } else {
    return NULL;
  }
}

node* search(node* head,int data) {

  node *cursor = head;
  while(cursor!=NULL) {
    if(cursor->data == data)
      return cursor;
    cursor = cursor->next;
  }
  return NULL;
}

node* insertion_sort(node* head) {
  node *x, *y, *e;

  x = head;
  head = NULL;

  while(x != NULL) {
    e = x;
    x = x->next;
    if (head != NULL) {
      if(e->data > head->data) {
        y = head;
        while ((y->next != NULL) && (e->data> y->next->data)) {
          y = y->next;
        }
        e->next = y->next;
        y->next = e;
      } else {
        e->next = head;
        head = e ;
      }
    } else {
      e->next = NULL;
      head = e ;
    }
  }
  return head;
}

node* reverse(node* head) {
  node* prev    = NULL;
  node* current = head;
  node* next;
  while (current != NULL) {
    next  = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
  return head;
}

node* remove_front(node* head) {
  if(head == NULL)
    return NULL;
  node *front = head;
  head = head->next;
  front->next = NULL;
  /* is this the last node in the list */
  if(front == head)
    head = NULL;
  free(front);
  return head;
}

node* remove_back(node* head) {
  if(head == NULL)
    return NULL;

  node *cursor = head;
  node *back = NULL;
  while(cursor->next != NULL) {
    back = cursor;
    cursor = cursor->next;
  }
  if(back != NULL)
    back->next = NULL;

  /* if this is the last node in the list*/
  if(cursor == head)
    head = NULL;

  free(cursor);

  return head;
}

node* remove_any(node* head,node* nd) {
  /* if the node is the first node */
  if(nd == head) {
    head = remove_front(head);
    return head;
  }

  /* if the node is the last node */
  if(nd->next == NULL) {
    head = remove_back(head);
    return head;
  }

  /* if the node is in the middle */
  node* cursor = head;
  while(cursor != NULL) {
    if(cursor->next = nd)
      break;
    cursor = cursor->next;
  }

  if(cursor != NULL) {
    node* tmp = cursor->next;
    cursor->next = tmp->next;
    tmp->next = NULL;
    free(tmp);
  }
  return head;
}

void dispose(node *head) {
  node *cursor, *tmp;

  if(head != NULL) {
    cursor = head->next;
    head->next = NULL;
    while(cursor != NULL) {
      tmp = cursor->next;
      free(cursor);
      cursor = tmp;
    }
  }
}
