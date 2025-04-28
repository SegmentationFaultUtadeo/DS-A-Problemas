class Node
  attr_accessor :value, :next   # attr_accessor creates the getter and the setter

  def initialize(value)
    @value = value
    @next = nil
  end

  def display
    puts "Node value: #{@value}"
  end
end


node1 = Node.new(10)
node2 = Node.new(20)
node1.next = node2

#node1.display
#node1.next.display



#-----------------------------------------------------------------------
class LinkedList
  def initialize
    @head = nil
    @tail = nil
  end


  def get_tail
    @tail
  end

  def get_head
    @head
  end

  def is_empty?
    @head.nil?
  end

  def insert_at_head(value)
    new_node = Node.new(value)
    new_node.next = @head   # The next node is the one that was in the head
    @head = new_node        # The new head is the new node
  end

  def delete_at_head
    return if is_empty?
    @head = @head.next      # Removes the connection from the previous head
  end

  def search(value)
    current = @head
    while current           # Iterates until the current value is equal to the one mentioned
      return current if current.value == value
      current = current.next
    end
    nil
  end

  def print_list
    if is_empty?
      puts "The list is empty."
      return
    end

    current = @head
    while current           # Is the same logic as the search method, but each element is printed until the current.next is equal to nil
      print "#{current.value} -> "
      current = current.next
    end
    puts "nil"
  end


  def insert_at_tail(value)
    if self.get_head != nil
      self.set_tail
    else
      self.insert_at_head(value)
    end

    new_node = Node.new(value)
    @tail.next = new_node   #
    @tail = new_node        #
  end

  def set_tail
    current = @head
    while current
      if current.next == nil
        @tail = current
        return current
      else
        current = current.next
      end
    end
  end

end




list = LinkedList.new

list.insert_at_head(10)
list.insert_at_head(20)
list.insert_at_head(30)

list.print_list        # 30, 20, 10, nil

list.insert_at_tail(40)
list.insert_at_tail(50)

list.print_list


# puts list.is_empty?    # false
# puts list.get_head.value  # 30

# list.delete_at_head
# list.print_list        # 20, 10, nil

# list.search(10)

# if found_node
#   puts "Found: #{found_node.value}"
# else
#   puts "Not found"
# end
