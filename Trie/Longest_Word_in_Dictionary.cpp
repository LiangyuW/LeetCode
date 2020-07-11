class Solution {
public:

    set<string> st;
    
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end(), []
            (const string&s1, const string&s2){
                if(s1.size()==s2.size()){
                    return s1<s2;
                }
                else return s1.size()>s2.size();
        });
        
        for(auto e: words){
            st.insert(e);
        }
        
        for(auto e: words){
            bool canbuild=true;
            for(int i=1; i<e.size(); i++){
                if(st.count(e.substr(0, i))==0){
                    canbuild=false;
                }
            }
            if(canbuild) return e;
        }
        

        return "";
    }
};


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
        n->word=word;
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



class Solution {
public:
    string longest=""; 
    
    string longestWord(vector<string>& words) {
        Trie* tree= new Trie();
        
        for(auto e: words){
            tree->insert(e);
        }
        dfs(tree->root);
        return longest;
    }
    
    void dfs(trienode* root){
        if(root==nullptr) return;
        
        if(root->word!=""){
            if(root->word.size()>longest.size()){
                longest=root->word;
            } else if (root->word.size()==longest.size() && root->word < longest){
                longest=root->word;
            }
        }
         
        for(auto e: root->letters){
            if(e && e->word!="") dfs(e);
        }
       
    }
    
    
};
