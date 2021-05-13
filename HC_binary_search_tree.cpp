/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/

	bool checkBST(Node* root) {
        vector<int> arr;
        if (!root) return true;
        rder(root,arr);
        for (long unsigned int i=0;i<arr.size()-1;i++) {
            if (arr[i]>=arr[i+1]) return false;
        }
        return true;

	}

    Node* rder (Node* root,vector<int>& arr) {
         
        if(!root) {
          return 0;   
        } 

        rder(root->left,arr);
        arr.push_back(root->data);
        rder(root->right,arr);
        return 0;
        
    }


    