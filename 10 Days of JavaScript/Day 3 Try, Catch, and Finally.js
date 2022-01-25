function reverseString(s) {
  if (typeof s === "string") {
    console.log(
      s
        .split("")
        .reverse()
        .join("")
    );
  } else {
    console.log("s.split is not a function" + "\n" + s);
  }
}