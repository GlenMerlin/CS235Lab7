#include "BSTInterface.h"

using namespace std;

class BST : public BSTInterface {
    public:
        BST() {};
        ~BST() {};
        NodeInterface * getRootNode() const;
        bool add(int data);
        bool remove(int data);
        void clear();
    private:
        int test = 0;
};