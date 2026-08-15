class MyHashSet {
public:
    vector<int> vc;
    MyHashSet() {

    }
    
    void add(int key) {
        bool flag = true;
        for(int i=0;i<vc.size();i++){
            if(vc[i]==key){
                flag=false;
                break;
            }
        }
        if(flag){
            vc.push_back(key);
        }
    }
    
    void remove(int key) {
        for(int i=0;i<vc.size();i++){
            if(vc[i]==key){
                vc.erase(vc.begin()+i);
                break;
            }
        }
    }
    
    bool contains(int key) {
        for(int val : vc){
            if(val==key) return true;
        }
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
