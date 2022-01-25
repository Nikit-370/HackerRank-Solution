function getSecondLargest(nums) {
    let firstLargestNum = 0;
  let secondLargestNum = 0;

  for (let i = 0; i < nums.length; i++) {
    if (nums[i] > firstLargestNum) {
      secondLargestNum = firstLargestNum;
      firstLargestNum = nums[i];
    }
    if (nums[i] > secondLargestNum && nums[i] < firstLargestNum) {
      secondLargestNum = nums[i];
    }
  }
  return secondLargestNum;

}

