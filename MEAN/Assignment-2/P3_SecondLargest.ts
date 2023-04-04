function Maximun(nums: number[]): number {
	// Not applicable if the array has less than two elements, returns NaN
	if (nums.length < 2) return NaN;

	let max = nums[0];
	let secondMax = nums[1];

	// Iterating from second element as max is already set to the first element
	for (let i = 1; i < nums.length; i++) {
		// Following conditional statement is required in case of first two or more elements are equal
		if (secondMax == max && i + 1 < nums.length) secondMax = nums[i + 1];

		if (nums[i] > max) {
			secondMax = max;
			max = nums[i];
		} else if (nums[i] > secondMax && nums[i] < max) secondMax = nums[i];
	}

	// Not applicable if all elements of the array are equal, returns NaN
	if (secondMax == max) return NaN;

	return secondMax;
}

var nums: number[] = [23, 89, 6, 29, 56, 45, 77, 32];

var num: number = Maximun(nums);

console.log("The second largest number: " + num);
