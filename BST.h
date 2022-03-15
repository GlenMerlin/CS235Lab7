#include "BSTInterface.h"
#include "Node.h"

using namespace std;

class BST : public BSTInterface {
    public:
        BST();
        virtual ~BST(void);
        Node * getRootNode() const;
        bool add(int data);
        bool updateData(Node*& currentNode, int data);
        bool remove(int data);
        bool deleteData(Node*& currentNode, int data);
        void clearHelper(Node*& currentNode);
        void clear();
    
    private:
            Node *root;
};