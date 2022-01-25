function getMaxLessThanK(n, k) {
  let max = 0;
  for (let i = 1; i <= n; i++) {
    for (let j = i + 1; j <= n; j++) {
      (i & j) > max && (i & j) < k ? (max = i & j) : max;
    }
  }
  return max;
}