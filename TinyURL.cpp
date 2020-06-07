class Solution {
public:
    
    map<string, string> table;
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        
        stringstream sstream;
        size_t hashedurl;
        hash<string> hashurl;
        hashedurl = (hashurl(longUrl)*12345678)%10000000;
        sstream<<hex<<uppercase<<hashedurl;
        string hashedurlstr = "http://tinyurl.com/"+sstream.str();
        table[hashedurlstr] = longUrl;
        return hashedurlstr;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return table[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
