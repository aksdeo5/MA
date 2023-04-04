function ChkArmstrong(num: number): boolean {
	// Negative numbers cannot be an Armstrong number.
	if (num < 0) return false;

	let acceptedNum = num;
	let sum = 0;
	let noOfDigits = 0;

	// Calculates the number of digits in the provided number
	while (acceptedNum != 0) {
		acceptedNum = Math.floor(acceptedNum / 10);
		noOfDigits++;
	}

	acceptedNum = num;

	// Fetching digit one by one, raising to the power of noOfDigits and adding it to the sum
	while (acceptedNum != 0) {
		let digit: number = acceptedNum % 10;
		sum += Math.pow(digit, noOfDigits);
		acceptedNum = Math.floor(acceptedNum / 10);
	}

	// Checking if the calculated sum is equal to the provided number
	if (sum == num) return true;

	return false;
}

var num: number = 371;

if (ChkArmstrong(num)) console.log("It is Armstrong number.");
else console.log("It is not Armstrong number.");
