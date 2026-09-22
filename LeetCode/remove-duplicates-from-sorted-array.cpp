class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    // first element is always unique
    int unique_num = nums[0];
    // position zero is taken for the first element already
    int unique_pos = 1;

    for (size_t i = 1; i < nums.size(); i++) {
      // write only if unique element found
      if (nums[i] != nums[unique_pos - 1]) {
        // nums[i] is unique
        nums[unique_pos] = nums[i]; // write unqiue element 'nums[i]'
                                    // at unique spot 'unique_pos'
        unique_pos++;
      }
    }
    return unique_pos;
  }
};
