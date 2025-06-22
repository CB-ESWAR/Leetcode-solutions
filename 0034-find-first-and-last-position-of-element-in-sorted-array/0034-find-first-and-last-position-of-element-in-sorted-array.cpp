class Solution {
public:
    vector<int> searchRange(const vector<int>& arr, int x) {
        //eswar
        int n = arr.size();
        int low = 0, high = n - 1;
        int lower = -1, upper =n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= x) {
                lower = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] > x) {
                upper = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if (lower == -1 || arr[lower] != x)
            return {-1, -1};
        return {lower, upper-1 };
    }
};