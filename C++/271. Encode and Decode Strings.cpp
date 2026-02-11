class Codec {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string encodedString {};
        for (const auto& s:strs)
            encodedString = encodedString + s + '\0';
        return encodedString;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        string fullString {};
        vector<string> result;
        for (int i {}; i < static_cast<int>(s.size()); ++i)
        {
            if (s[i] != '\0')
                fullString += s[i];
            else
            {
                result.push_back(fullString);
                fullString = "";
            }
        }
        return result;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));
