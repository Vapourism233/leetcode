class LRUCache {
public:
    struct DoubleLinkNode{
        int key;
        int val;
        DoubleLinkNode* prev;
        DoubleLinkNode* next;
        DoubleLinkNode(int _key, int _val):key(_key), val(_val), prev(NULL), next(NULL){}
    }*L, *R;
    int n;
    unordered_map<int, DoubleLinkNode*> hash;

    void remove(DoubleLinkNode* p){
        p->next->prev = p->prev;
        p->prev->next = p->next;
    }

    void insert(DoubleLinkNode* p){
        p->next = L->next;
        p->prev = L;
        L->next->prev = p;
        L->next = p;
    }

public:
    LRUCache(int capacity) {
        n = capacity;
        L = new DoubleLinkNode(-1, -1), R = new DoubleLinkNode(-1, -1);
        L->next = R;
        R->prev = L;
    }

    int get(int key){
        if(hash.count(key) == 0){
            return -1;
        }
        auto p = hash[key];
        remove(p);
        insert(p);
        return p->val;
    }
    
    void put(int key, int value) {
        if(hash.count(key)){
            auto p = hash[key];
            p->val = value;
            remove(p);
            insert(p);
        }
        else{
            if(hash.size() == n){
                auto p = R->prev;
                remove(p);
                hash.erase(p->key);
                delete p;
            }
            auto p = new DoubleLinkNode(key, value);
            hash[key] = p;
            insert(p);
        }
    }
};
