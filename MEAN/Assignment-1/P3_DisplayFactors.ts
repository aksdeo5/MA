function DisplayFactors(num: number): void {
	num = Math.abs(num);

	if (num == 0) {
		console.log("Factors not applicable for the number 0");
		return;
	}
	console.log(1);

	for (let i = 2; i <= Math.floor(num / 2); i++)
		if (num % i == 0) console.log(i);

	if (num != 1) console.log(num);
}

DisplayFactors(2);
