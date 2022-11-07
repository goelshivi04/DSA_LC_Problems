class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // Sort boxes so that boxes with the most units appear first
        sort(boxTypes.begin(), boxTypes.end(), [](auto& box1, auto& box2) {
            return box1[1] > box2[1];
        });
        
        int totalUnits = 0;
        for (auto& box : boxTypes) {
            // Take as many boxes until we're out of space on the truck
            // or we're out of boxes of this type
            int numBoxes = min(truckSize, box[0]);
            totalUnits += numBoxes * box[1];
            truckSize -= numBoxes;
        }
        return totalUnits;
    }
};
