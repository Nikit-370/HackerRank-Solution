function sides(literals, ...expressions) {
  const [area, perimeter] = expressions;
  const s1 = (perimeter + Math.sqrt(Math.pow(perimeter, 2) - 16 * area)) / 4;
  const s2 = (perimeter - Math.sqrt(Math.pow(perimeter, 2) - 16 * area)) / 4;
  return [s1, s2].sort();
}