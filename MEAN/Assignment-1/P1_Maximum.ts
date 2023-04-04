function Maximum(num1: number, num2: number, num3: number): number {
	let max = num1;

	if (num2 > max) max = num2;

	if (num3 > max) max = num3;

	return max;
}

var max = Maximum(23, 89, 6);

console.log("Maximum number is " + max);
