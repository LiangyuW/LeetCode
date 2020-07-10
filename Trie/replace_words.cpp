class trienode{
    public:
    bool isleaf;
    string word;
    vector<trienode*> letters;
    
    trienode():
        letters(26)
    {
        this->isleaf=false;
    }
    
    bool hasKey(char c){
        return letters[c-'a']!=NULL;
    }
    
    trienode* get(char c){
        return letters[c-'a'];
    }
    
    void insert(char c, trienode*n){
        letters[c-'a']=n;
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
            char c=word[i];
            if(!n->hasKey(c)){
                trienode*newnode=new trienode();
                n->insert(c, newnode);
            }
            n=n->get(c);
        }
        n->isleaf=true;
        n->word=word;
    }
    
    trienode* searchPrefix(string word){
        trienode*n=root;
        for(int i=0; i<word.size(); i++){
            char c=word[i];
            if(n->hasKey(c)){
                n=n->get(c);
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
    
    /** Returns if there is any prefix in the trie that for the given word. */
    string startsWith(string word) {
        trienode*n=root;
        string prefix="";
        for(int i=0; i<word.size(); i++){
            char c=word[i];
            
            if(n->hasKey(c)){
                n=n->get(c);
            } else {
                break;
            }
            if(n->word!="") break;
        }
        prefix+= n->word;
        return prefix==""? word:prefix;
    }
};



class Solution {
public:
    string replaceWords(vector<string>& dict, string sentence) {
        Trie* tree = new Trie();
        
        for(auto e: dict){
            tree->insert(e);
        }
        
        string out="";
        istringstream iss(sentence);
        for (string word; iss >> word; ){
                out+=tree->startsWith(word)+" ";
        }
        out.pop_back();
        return out;
    }
};
