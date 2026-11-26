class LRUCache {
public:
int cap;
 list<pair<int,int>> cache;
 unordered_map<int,list<pair<int,int>>::iterator> mp;

    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        if(!mp.count(key)) return -1;

        // move front
        cache.splice(cache.begin(),cache,mp[key]);
        return mp[key]->second;
    }
    
    void put(int key, int value) {
        if(mp.count(key)){
            // update

            mp[key]->second = value;

            // move front

            cache.splice(cache.begin(),cache,mp[key]);
            return;
        }

        if(cap == cache.size()){
            int oldkey = cache.back().first;
            mp.erase(oldkey);
            cache.pop_back();
        }
        cache.push_front({key,value});
        mp[key] = cache.begin();
    }
};
