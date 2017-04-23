struct node{
  node *left;
  node *right;
  int val;
  node(int v){
    val = v;
    left = nullptr;
    right = nullptr;
  }
  node(){
    left = nullptr;
    right = nullptr;
    val = 0;
  }
};

class binaryKZ
{

private:

	//Constructor the structure and constructor here



  node *root;
	//head or root ptr
private :void insert( node *&tree, int val);


public :
  binaryKZ(){
    root = new node;
  }
  binaryKZ(int val){
    root = new node(val);
  }

	void insert( int val);
	//{
		//insert(root,num);
	//}
	bool Bsearch(int num) const;
  bool Bsearch(node *tree, int num) const;

};

void binaryKZ::insert(node *&tree, int val)
{
if(root -> left == nullptr && root -> right == nullptr && root -> val == 0){
  root -> val = val;
}else{
	if(val < tree -> val){
    if(tree -> left == nullptr){
      tree -> left = new node(val);
    }else{
      insert(tree -> left, val);
    }
  }else{
    if(tree -> right == nullptr){
      tree -> right = new node(val);
    }else{
      insert(tree -> right, val);
    }
  }
}
}
void binaryKZ::insert(int val){
  insert(root, val);
}

bool binaryKZ::Bsearch(node *tree,int num) const
{
  if(tree -> val == num){
    return true;
  }
  else{
      if(num < tree -> val){
        if(tree -> left == nullptr){
          return false;
        }else{
          Bsearch(tree -> left, num);
        }
      }else{
        if(tree -> right == nullptr){
          return false;
        }else{
          Bsearch(tree -> right,num);
        }
      }
  }

	//return 0;
}
bool binaryKZ::Bsearch(int num) const{
  Bsearch(root, num);
}
