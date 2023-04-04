function ChkPrime(num: number): boolean {
	num = Math.abs(num);

	if (num < 2) return false;

	for (let i = 2; i <= Math.floor(num / 2); i++) if (num % i == 0) return false;

	return true;
}

let input: number = 11;

if (ChkPrime(input)) {
	console.log("It is a prime number.");
} else {
	console.log("It is not a prime number.");
}
