class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0; // Edge case

        map<int, bool> numMap;
        for (int num : nums) {
            numMap[num] = false;  // Mark all numbers as unvisited
        }

        int longest = 0;

        for (auto& [num, visited] : numMap) {
            if (visited) continue;  // Skip if already part of a sequence
            
            visited = true;
            int count = 1;
            int next = num + 1;

            // Traverse forward
            while (numMap.find(next) != numMap.end() && !numMap[next]) {
                numMap[next] = true;
                count++;
                next++;
            }

            int prev = num - 1;

            // Traverse backward
            while (numMap.find(prev) != numMap.end() && !numMap[prev]) {
                numMap[prev] = true;
                count++;
                prev--;
            }

            longest = max(longest, count);
        }

        return longest;
    }
}; 
