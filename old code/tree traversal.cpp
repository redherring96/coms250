// We will add the three functions to this code to display Preorder, Inorder and Postorder.

#include<iostream>

using namespace std;

class binaryKZ

{

private:

struct treenode

{

int val;

treenode *left;

treenode *right;

//constructor

treenode( int val1, treenode *left1=nullptr, treenode *right1=nullptr)

{

val=val1;

left=left1;

right=right1;

}

};

treenode *root;

private :void insert( treenode *&, int);

void Pre( treenode *) const;

 

public :

binaryKZ()

{

root=nullptr;

}

void insert( int num)

{

insert(root,num);

}

bool Bsearch(int num) const;

 

 

};

void binaryKZ::insert( treenode *&kztree, int num)

{

if (kztree==nullptr)

{

kztree=new treenode(num);

}

if (kztree->val==num)

return;

if ( num<kztree->val)

insert(kztree->left,num);

else

insert(kztree->right,num);

}

bool binaryKZ::Bsearch(int num) const

{

treenode *tree=root;

while( tree!=nullptr)

{

if (tree->val==num)

return true;

else if ( num<tree->val)

tree=tree->left;

else if (num>tree->val)

tree=tree->right;

}

return false;

}

void binaryKZ::Pre( treenode *kztree) const

{

 

 

}
