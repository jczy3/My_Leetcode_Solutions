class SparseVector {
public:
    
    SparseVector(vector<int> &nums) {
        sparse = nums;
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        int total = 0;
        for (int i = 0; i < vec.sparse.size(); ++i)
        {
            total += (vec.sparse[i] * sparse[i]);
        }
        return total;
    }

private:
    vector<int> sparse;
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);
