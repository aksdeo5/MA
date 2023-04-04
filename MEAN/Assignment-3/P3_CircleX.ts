class Circle {
	protected Radius: number;
	protected PI: number;

	public constructor(rad: number) {
		this.Radius = rad;
		this.PI = 3.14;
	}

	public Area() {
		return this.PI * this.Radius * this.Radius;
	}
}

class CircleX extends Circle {
	constructor(rad: number) {
		super(rad);
	}

	public Circumference() {
		return 2 * this.PI * this.Radius;
	}
}

var circleX1 = new CircleX(5);
var circleX2 = new CircleX(7);

console.log("circleX1.Circumference(): " + circleX1.Circumference());
console.log("circleX2.Circumference(): " + circleX2.Circumference());
