/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void fun(TreeNode* root,vector<int> &arr){
    if(root==NULL){
        return;
    }
    fun(root->left,arr);
    fun(root->right,arr);
    arr.push_back(root->data);
}

vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> arr;
    fun(root,arr);
    return arr;

