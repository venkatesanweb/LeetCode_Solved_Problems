class Solution {
public:
    void front(Node* root, int curr, int target, vector<Node*>&v){
        if(root==NULL) return;
        front(root->left, curr+1, target, v);
        if(curr==target){
            v.push_back(root);
        }
        front(root->right, curr+1, target, v);
    }
    int levels(Node*root){
        if(root==NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    void helper(vector<Node*>&v){
        for(int i =0;i<v.size()-1;i++){
            Node* n1 = v[i];
            Node* n2=v[i+1];
            n1->next = n2;
        }
    }
    Node* connect(Node* root) {
        int level = levels(root);
        for(int i = 0;i<level;i++){
            vector<Node*>v;
            front(root,0,i,v);
            helper(v);
            v.clear();
        }
        return root;
    }
};
