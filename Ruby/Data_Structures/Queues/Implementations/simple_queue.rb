class Queue
  def initialize
    @queue = Array.new()
    @front = 0
  end

  def enqueue(item)
    @queue[@queue.size] = item  # Add item at the end manually
  end

  def dequeue
    if is_empty?
      puts "Queue underflow"
      return nil
    else
      item = @queue[@front]
      @front += 1
      return item
    end
  end

  def peek
    is_empty? ? nil : @queue[@front]
  end

  def is_empty?
    @front >= @queue.size
  end

  def size
    @queue.size - @front
  end

  def print_queue
    ( @front...@queue.size ).each do |i|
      print "#{@queue[i]} "
    end
    puts
  end
end


queue_1 = Queue.new()
queue_1.enqueue(40)
queue_1.enqueue(true)
queue_1.enqueue("Computador")
puts queue_1.print_queue
queue_1.dequeue
puts queue_1.print_queue
