def group_by_marks(marks, pass_marks)
  # your code here
    marks.group_by { |student, mark| mark >= pass_marks ? "Passed" : "Failed" }
end
