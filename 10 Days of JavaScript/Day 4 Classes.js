function Polygon(shape) {
  this.type = shape;
  this.perimeter = getPerimeter;
}

function getPerimeter() {
  return this.type.reduce((a, b) => a + b);
}

