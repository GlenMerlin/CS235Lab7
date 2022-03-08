#include "BSTInterface.h"
#include "Node.h"

using namespace std;

class BST : public BSTInterface {
    public:
        BST();

        virtual ~BST(void);

        Node * getRootNode() const;
        
        bool add(int data);

        bool updateData(Node* currentNode, int data, bool action);
        
        bool remove(int data);
        
        void clear();

        bool search(int data);

        int treeSize, searchSteps;
    
    private:
            Node *root;
};