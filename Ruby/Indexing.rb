def serial_average(string_values)
  values = string_values.split('-')
  prefix = values[0]  
  average = (values[1].to_f + values[2].to_f) / 2
  formatted_average = format("%.2f", average.round(2))
  new_string = prefix + "-" + formatted_average
end