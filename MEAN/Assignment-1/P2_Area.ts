function Area(radius: number, PI: number = 3.14): number {
	radius = Math.abs(radius);
	return PI * radius * radius;
}

var area = Area(5);

console.log("Area of cirlce is " + area);
