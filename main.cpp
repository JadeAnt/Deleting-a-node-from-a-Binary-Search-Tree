struct BSTNode{
  int data;
  struct BSTNode* left;
  struct BSTNode* right;
}

BSTNode* FindMin(BSTNode** root){
  if(root == NULL){
    cout << "Error tree is empty \n";
    return -1;
  }
  
  elseif(root->left == NULL){
    return root->data;
  }
  
  return FindMin(root->left);
}


BSTNode* Delete(BSTNode* root, int data){
  if (root == NULL) return root;
  
  elseif(data < root ->data) root->left = Delete(root->left, data);
  
  elseif(data > root->data) root->right = Delete(root->right, data);
  
  else{
    //case 1: the node has no child
    if(root->left == NULL && root->right== NULL){
      delete root;
      root = NULL;
    }
    
    //case 2: the node has and one child
    elseif(root->left == NULL)
      struct BSTNode** temp = root;
      root = root->right
      delete temp;
    }
      
    elseif(root->right == NULL){
      struct BSTNode *temp = root;
      root = root->left;
      delete->temp;
    }
    
    //case 3: the node has two children
    else{
      struct BSTNode *temp = FindMin(root->right);
      root->data = temp->data;
      root->right = Delete(root->right, temp->data);
    }
  
  }

  return root;
}


int main(){
  // Input code here to test functions

}
