class Stack
  def initialize
    @stack = Array.new()
    @top = -1
  end

  def push(item)
    @top += 1
    @stack[@top] = item
  end

  def pop
    if is_empty?
      puts "Stack underflow"
      return nil
    else
      item = @stack[@top]
      @top -= 1
      return item
    end
  end

  def peek
    is_empty? ? nil : @stack[@top] # condition ? result_if_true : result_if_false
  end

  def is_empty?
    @top == -1
  end

  def size
    @top + 1
  end

  def print_stack
    (0..@top).each { |i| print "#{@stack[i]} " }
    puts
  end
end


stack_1 = Stack.new()
stack_1.push(40)
stack_1.push(true)
puts stack_1.print_stack
