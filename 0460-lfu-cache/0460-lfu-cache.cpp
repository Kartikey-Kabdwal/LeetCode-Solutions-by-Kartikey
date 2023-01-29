class LFUCache {
private:
    unordered_map<int, int> valMap;  // key --> value
    unordered_map<int, int> freqMap;  // key --> frequence
    unordered_map<int, list<list<int>>::iterator> headMap;  // frequence --> bucket head
    unordered_map<int, list<int>::iterator> nodeMap;  // key --> node in list
    list<list<int>> buckets;  // buckets

    int cap;
    int num;

    /* increase the frequence of @key */
    void touch(int key) {
        int freq = freqMap[key];
        auto head = headMap[freq];  // head of the bucket containing key
        auto node = nodeMap[key];  // the list node containing key
        head->erase(node);  // delete the key from this bucket
        // find new bucket head
        auto newHead = head;
        if (headMap.find(freq + 1) != headMap.end())
            newHead = headMap[freq + 1];
        else {
            // Note: that's "insert before" for C++
            buckets.insert(head, list<int>());
            newHead--;
        }
        // insert the key into another bucket
        // put the most recent values in the front
        newHead->push_front(key);
        // delete empty bucket (for convenience of finding LFU)
        if (head->empty()) {
            buckets.erase(head);
            headMap.erase(freq);
        }
        // update the maps
        freqMap[key]++;
        headMap[freq + 1] = newHead;
        nodeMap[key] = newHead->begin();
    }

public:
    LFUCache(int capacity) {
        cap = capacity;
        num = 0;
    }

    int get(int key) {
        if (valMap.find(key) == valMap.end()) return -1;
        touch(key);  // update frequence
        return valMap[key];
    }

    void put(int key, int value) {
        if (cap == 0) return;

        // Only update value
        if (valMap.find(key) != valMap.end()) {
            valMap[key] = value;
            touch(key);
            return;
        }
        // Need to evict a LFU key-value pair
        if (num >= cap) {
            // find the head of the bucket of minimum frequency
            auto head = buckets.end();
            head--;
            // find least visited key of this frequency and delete it
            int evict = head->back();
            head->pop_back();
            int freq = freqMap[evict];
            // if this bucket becomes empty, then delete it
            if (head->empty()) {
                headMap.erase(freq);
                buckets.pop_back();
            }
            // delete the evicted key
            valMap.erase(evict);
            freqMap.erase(evict);
            nodeMap.erase(evict);
            num--;
        }

        // find the head of frequency 1
        if (headMap.find(1) == headMap.end()) {
            buckets.push_back(list<int>());
            auto head = buckets.end(); head--;
            headMap[1] = head;
        }
        // insert new key at the front of list
        auto head = headMap[1];
        head->push_front(key);
        nodeMap[key] = head->begin();
        valMap[key] = value;
        freqMap[key] = 1;
        num++;
    }
};
