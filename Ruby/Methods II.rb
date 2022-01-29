def mask_article(text, words_array)
  words_array.each { |word| text.gsub!(word, strike(word)) }
  return text
end

def strike s
  "<strike>#{s}</strike>"
end