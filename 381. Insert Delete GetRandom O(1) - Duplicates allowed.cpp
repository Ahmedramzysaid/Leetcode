class RandomizedCollection {
    unordered_map<int, int> hash;
    int cnt;
public:
    RandomizedCollection() {
        cnt = 0;
    }
    
    bool insert(int val) {
        bool isNewElement = (hash[val] == 0);
        hash[val]++;
        cnt++;
        return isNewElement;
    }
    
    bool remove(int val) {
        if (hash[val] == 0) return false;
        hash[val]--;
        cnt--;
        return true;
    }
    
    int getRandom() {
        if (cnt == 0) return -1;
        int r = rand() % cnt + 1;
        int cur = 0;
        for (auto it : hash) {
            cur += it.second;
            if (r <= cur) {
                return it.first;
            }
        }
        return -1;
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */