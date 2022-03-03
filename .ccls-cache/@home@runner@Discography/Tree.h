struct TreeNode{
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

class Tree{
public: 
  Tree();
  void Insert();
  // void BFS(); 

private:
  int totalNodes;
  TreeNode* root = new TreeNode(); 
};