function Fibonacci(num: number): void {
	num = Math.abs(num);

	if (num < 1) {
		console.log(
			"This program considers to start the fibonacci series with number 1."
		);
		return;
	}
	let first = 1;
	let second = 1;

	console.log(first);
	console.log(second);

	let next = first + second;

	while (next <= num) {
		console.log(next);
		first = second;
		second = next;
		next = first + second;
	}
}

Fibonacci(21);
