/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void fun(TreeNode<int> *root,vector<int> &a){
    if(root==NULL){
        return;
    }
    a.push_back(root->data);
    fun(root->left,a);
    fun(root->right,a);
}
vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int> a;
    fun(root,a);
    return a;
}
