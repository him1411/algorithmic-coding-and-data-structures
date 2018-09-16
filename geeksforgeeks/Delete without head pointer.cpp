void deleteNode(Node *node)
{
   Node *temp = node->next;
   node->data = temp->data;
   node->next = temp->next;
   free(temp);
}