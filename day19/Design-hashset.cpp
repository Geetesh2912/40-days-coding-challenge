//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/design-hashset/
//submission link: https://leetcode.com/submissions/detail/677751521/

class MyHashSet {
public:
    vector<bool> table;
    MyHashSet() {
        table=vector<bool> (1000001, 0);        //as max key is 10^6 and mark all false at first
    }
    
    void add(int key) {
        table[key]=1;                           //make the keyth element true to add it
    }
    
    void remove(int key) {
        table[key]=0;                           //make keyth element false to remove it            
    }
    
    bool contains(int key) {                    //if the keyth element is present it would be ture/1 so check for it
        if (table[key]==1)
            return true;
        else 
            return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
