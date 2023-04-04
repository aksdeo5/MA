function Maximum(nums: number[]): number {
	if (nums.length < 1) return NaN;

	let max = nums[0];
	for (let i = 1; i < nums.length; i++) if (nums[i] > max) max = nums[i];

	return max;
}

var nums: number[] = [23, 89, 6, 29, 56, 45, 77, 32];

var max: number = Maximum(nums);

console.log("Maximum number is " + max);
