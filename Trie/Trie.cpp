class trienode{
    public:
    bool isleaf;
    vector<trienode*> letters;
    
    trienode():
        letters(26)
    {
        this->isleaf=false;
        
    }    
};


class Trie {
public:
    trienode* root;
    
    Trie(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        root= new trienode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        trienode* n=root;
        for(int i=0; i<word.size(); i++){
            int index=word[i]-'a';
            if(!n->letters[index]){
                n->letters[index]=new trienode();
            }
            n=n->letters[index];
        }
        n->isleaf=true;
    }
    
    trienode* searchPrefix(string word){
        trienode*n=root;
        for(int i=0; i<word.size(); i++){
            int index=word[i]-'a';
            if(n->letters[index]){
                n=n->letters[index];
            } else {
                return NULL;
            }
        }
        return n;
    }
    
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        trienode*n=searchPrefix(word);
        return n!=NULL && n->isleaf;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        trienode*n=searchPrefix(prefix);
        return n!=NULL;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
