
class WordDictionary {
public:
    struct trienode{
        public:
        bool isleaf;
        trienode* letters[26];
    
        trienode(){
            isleaf=false;
            fill_n(letters,26,nullptr);
        
        }
        
    };
    

    trienode* root;
    
    WordDictionary() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        
        root=new trienode();
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        trienode*n=root;
        for(int i=0; i<word.size(); i++){
            int index=word[i]-'a';

            if(!n->letters[index]){
                n->letters[index]=new trienode();
            }
            n=n->letters[index];
        }
        n->isleaf=true;
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        return search(word, 0, root);
    }
    
    bool search(string &word, int index, trienode* root){
        if(index>=word.size()) return root->isleaf;
        if(word[index]=='.'){
           for(int i=0; i<26; i++){
                if(root->letters[i] && search(word, index+1, root->letters[i])){
                    return true;
                }
           }
            return false;    
        } else {
            int j=word[index]-'a';
            if(!root->letters[j]) return false;
            return search(word, index+1, root->letters[j]);
        }
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
