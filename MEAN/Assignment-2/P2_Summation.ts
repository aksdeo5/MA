function Summation(nums: number[]): number {
	let sum = 0;

	for (let i = 0; i < nums.length; i++) sum = sum + nums[i];

	return sum;
}

var nums: number[] = [23, 6, 7, 4, 5, 7];

var sum: number = Summation(nums);

console.log("Addition is " + sum);
