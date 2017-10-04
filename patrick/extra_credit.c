// Linter tutorial: http://www.zentut.com/c-tutorial/c-linked-list/

typedef struct node {
  int data;
  struct node* next;
};

node* head;

node* create(int data, node* next)
{
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
