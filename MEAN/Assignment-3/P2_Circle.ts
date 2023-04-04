class Circle {
	private Radius: number;
	private PI: number;

	constructor(rad: number) {
		this.Radius = rad;
		this.PI = 3.14;
	}

	public Area() {
		return this.PI * this.Radius * this.Radius;
	}
}

var circle1 = new Circle(5);
var circle2 = new Circle(7);

console.log("circle1.Area(): " + circle1.Area());
console.log("circle2.Area(): " + circle2.Area());
