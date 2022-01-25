
function getCount(objects) {
  let pairCount = 0;
  for (let i = 0; i < objects.length; i++) {
    if (objects[i].x === objects[i].y) {
      pairCount++;
    }
  }
  return pairCount;
}
