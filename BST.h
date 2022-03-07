#include "BSTInterface.h"
#include "Node.h"

using namespace std;

class BST : public BSTInterface {
    public:
        BST();

        virtual ~BST(void);

        Node * getRootNode() const;
        
        bool add(int data);
        
        bool remove(int data);
        
        void clear();

        Node *root;
};