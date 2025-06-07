require_relative '../Implementations/simple_stack'


# You're given a string of parentheses (e.g., "(()())", "())(", etc.), and the goal is to determine if the parentheses
# are balanced.

def balanced_parentheses?(str)
  stack = Stack.new

  str.each_char do |char|
    if char == '(' || char == '[' || char == '{'
      stack.push(char)
    elsif char == ')' || char == ']' || char == '}'
      return false if stack.is_empty?
      top = stack.pop

      if char == ')' && top != '('
        return false
      elsif char == ']' && top != '['
        return false
      elsif char == '}' && top != '{'
        return false
      end
    end
  end

  stack.is_empty?
end

puts balanced_parentheses?("(()())")  # true
puts balanced_parentheses?("())(")    # false
puts balanced_parentheses?("((())")   # false
puts balanced_parentheses?("")        # true
