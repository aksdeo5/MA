class Arithmetic {
	private Number1: number;
	private Number2: number;

	constructor(num1: number, num2: number) {
		this.Number1 = num1;
		this.Number2 = num2;
	}

	public Addition() {
		return this.Number1 + this.Number2;
	}
	public Substraction() {
		return this.Number1 - this.Number2;
	}
	public Multiplication() {
		return this.Number1 * this.Number2;
	}
	public Division() {
		return this.Number1 / this.Number2;
	}
}

var arithmetic1 = new Arithmetic(5, 7);
var arithmetic2 = new Arithmetic(13, 19);

console.log("arithmetic1.Addition(): " + arithmetic1.Addition());
console.log("arithmetic1.Substraction(): " + arithmetic1.Substraction());
console.log("arithmetic1.Multiplication(): " + arithmetic1.Multiplication());
console.log("arithmetic1.Division(): " + arithmetic1.Division());

console.log("==============================================");

console.log("arithmetic2.Addition(): " + arithmetic2.Addition());
console.log("arithmetic2.Substraction(): " + arithmetic2.Substraction());
console.log("arithmetic2.Multiplication(): " + arithmetic2.Multiplication());
console.log("arithmetic2.Division(): " + arithmetic2.Division());
