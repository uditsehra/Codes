#include<iostream>
using namespace std;

class node{
    public :
        int data;
        node* left;
        node* right;

    node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
    }
};

class diameterHeight{
    public:
        int height;
        int diameter;   
};

node* constructTree(){
    int data;
    cin >> data;

    if(data==-1)
    {
        return NULL;
    }

    node* root = NULL;

    if(root==NULL)
    {
        root = new node(data);
        // return root;
    }


    root->left = constructTree();
    root->right = constructTree();

    return root;
}

void printPreOrder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout << root->data << " " ;
    printPreOrder(root->left);
    printPreOrder(root->right);
}

int countNodes(node*root){
	if(root==NULL){
		return 0;
	}

	int leftCount = countNodes(root->left);
	int rightCount = countNodes(root->right);

	return leftCount + rightCount + 1;
}

/* int sumOfNodes(node*root)
{
    int sum=0;

    int count = countNodes(root);

    if(root==NULL)
    {
        return -1;
    }

    while(count!=0)
    {
        sum += root->data;
        sumOfNodes(root->left);
        sumOfNodes(root->right);
    }

    return sum;
}
 */

/* int sumofNode(node* root)
{
    if(root==NULL)
    {
        return 0;
    }


} */

void postOrder(node* root)
{
    if(root=NULL)
    {
        return;
    }

    postOrder(root->left);
    cout << root->data << " ";
    postOrder(root->right);
}


bool search(node* root, int k)
{
    if(root==NULL)
    {
        return false;
    }

    if(root->data == k)
    {
        cout << k << " exists" << endl;
        return true;
    }

    bool l = search(root->left, k);
    bool r = search(root->right, k);

    return l || r;
}

/* int heightOfTree(node* root, int height, int left, int right)
{
    if(root==NULL)
    {
        return 0;
    }

    left = heightOfTree(root, 0, left, right)+1;

    right = heightOfTree(root, 0, left, right)+1;

    height = max(left, right);

    return height-1;
} */

int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        if(leftHeight>rightHeight)
            return leftHeight+1;
        else
        {
            return rightHeight+1;
        }
        
    }    
}

/* int diameter(node* root){} find the diameter of a tree where diameter is total number of pairs length */


bool isBalanced(node* root)
{
    if(root == NULL)
    {
        return true;
    }

    int left = height(root->left);
    int right = height(root->right);

    bool leftSub = left-right>1 ?false:true;
    bool rightSub = left-right>1?false:true;

    return leftSub and rightSub;
}

class HeightBalanced{
public:
    int height;
    bool balanced;
};


HeightBalanced isBalancedOptimised(node* root)
{
    HeightBalanced var;

    if(root==NULL)
    {
        var.height = -1;
        var.balanced = true;
        return var;
    }

    HeightBalanced leftPair = isBalancedOptimised(root->left);
    HeightBalanced rightPair = isBalancedOptimised(root->right);

    int leftHeight = leftPair.height;
    int rightHeight = rightPair.height;
 
    bool leftSub = abs(leftHeight-rightHeight)<=1 ?true:false;
    bool rightSub = abs(leftHeight-rightHeight)<=1 ?true:false;

    var.balanced = leftSub or rightSub;

    var.height = max(leftHeight, rightHeight)+1;

    return var;
}

void printToLeaf(node* root, string path)
{
    if(root==NULL)
    {
        return;
    }

        path += to_string(root->data);

        if(root->left==NULL && root->right==NULL)
        {
            //path += to_string(root->data);
            cout << path<< endl;
            return;
        }

        printToLeaf(root->left, path);
        printToLeaf(root->right, path);
}

node* lowestCommonAncestor(node* root, int t, int k)
{
    if(root==NULL)
    {
        return 0;
    }

    // bool leftSub = lowestCommonAncestor(root->left);

    if(root->data==t or root->data==k)
    {
        return root;
    }

    node* leftLCA = lowestCommonAncestor(root->left, t, k);
    node* rightLCA = lowestCommonAncestor(root->right, t, k);

    if(leftLCA==NULL and rightLCA==NULL)
    {
        return NULL;
    }

    if(leftLCA!=NULL and rightLCA!=NULL)
    {
        return root;
    }

    return leftLCA!=NULL ? leftLCA : rightLCA;
}

/* int geetDistanceOfLCA(node* root, int lca)
{
    if(root==NULL)
    {
        return -1;
    }

    int left = getDistanceOfLCA(root->left, lca);
    int right = getDistanceOfLCA(root->right, lca);

    if(root->data==lca)
    {
        return 0;
    }

    if(root->data!=lca)
    {
        return -1;
    }

    return max(left, right)+1;
}

int getDistanceFromLCA(node* root, node* lca, int t, int k)
{   
    int distance = 0;
    if(lca==NULL)
    {
        return 0;
    }

    int left = getDistance(root->left, lca, t, k);
    int right = getDistance(root->right, lca, t, k)
   
    if (root->data!=t or root->data!=k)
    {
        distance++;        
    }

    if(root->data==t or root->data ==k)
    {
        return 0;
    }

    distance = left + right;

    return distance;
} */

//int firstLevel = 0;

void printLeftBoundary(node* root, int level)
{
    string var = "";

    if(root==NULL)
    {
        return;
    }

    if(level<=1)
    {
        cout << root->data;
    }
   //    cout << root->data;
    printLeftBoundary(root->left, level+1);
    printLeftBoundary(root->right, level+1);

}

int firstLevel= 0;

void printLeftBoundaryWithoutLeaf(node* root, int level)
{
    string var = "";

    if(root==NULL)
    {
        return;
    }

    if(level==firstLevel)
    {
        if(root->left!=NULL)
            cout << root->data;
            firstLevel++;
    }
   //    cout << root->data;
    printLeftBoundaryWithoutLeaf(root->left, level+1);
    printLeftBoundaryWithoutLeaf(root->right, level+1);

}

void printLeafNodes(node* root)
{
    string var = "";

    if(root==NULL)
    {
        return;
    }

    if(root->left==NULL && root->right==NULL)
    {   
        cout << root->data<< " ";
    }
   //    cout << root->data;
    printLeafNodes(root->left);
    printLeafNodes(root->right);
}

// Try LeetCode submit Binary Tree Right Side View;

int maxSumPath(node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int left =root->data + maxSumPath(root->left);
    int right = root->data + maxSumPath(root->right);

    return max(left, right);
}


//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        
        int maxSum = INT_MIN;
        helper(root, maxSum);
            
        return maxSum;
    }
    
    int helper(TreeNode* root, int &maxSum)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int leftMax = helper(root->left, maxSum);
        int rightMax = helper(root->right, maxSum);
        
        leftMax = max(leftMax, 0);
        rightMax = max(rightMax, 0);
        
        maxSum = max(maxSum, leftMax+rightMax+root->val);
        
        return max(leftMax, rightMax) + root->val;
    }
};
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

int main()
{
    node* root = NULL;

    root = constructTree();

//    printPreOrder(root);

//   postOrder(root);

//   cout << search(root, 3);

//   cout << height(root);

//    cout << diameter(root);

    // HeightBalanced var = isBalancedOptimised(root);
    // cout << var.balanced<< endl;

//    printToLeaf(root, "");

    // int lca = lowestCommonAncestor(root, 4, 6);

    // cout << getDistanceFromLCA(root, lca, 4, 6)<< endl;

 //   printLeftBoundary(root, 0);

 //   printLeftBoundaryWithoutLeaf(root, 0);

//    printLeafNodes(root);

    cout << maxSumPath(root);

    return 0;
}