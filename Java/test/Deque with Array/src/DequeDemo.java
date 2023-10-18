import java.util.ArrayDeque;
import java.util.Deque;

public class DequeDemo {

    public static void main(String[] args) {
        // Create an ArrayDeque object
        Deque<String> deque = new ArrayDeque<String>();
        
        // Add elements to the deque from both ends
        deque.addFirst("A");
        deque.addLast("B");
        deque.addFirst("C");
        deque.addLast("D");
        
        // Print the size and contents of the deque
        System.out.println("Size of deque: " + deque.size());
        System.out.println("Elements in deque: " + deque);
        
        // Remove elements from the deque from both ends
        String first = deque.removeFirst();
        String last = deque.removeLast();
        
        // Print the removed elements
        System.out.println("Removed first element: " + first);
        System.out.println("Removed last element: " + last);
        
        // Print the size and contents of the deque
        System.out.println("Size of deque: " + deque.size());
        System.out.println("Elements in deque: " + deque);
        
        // Peek elements from the deque from both ends
        String head = deque.peekFirst();
        String tail = deque.peekLast();
        
        // Print the peeked elements
        System.out.println("Peeked first element: " + head);
        System.out.println("Peeked last element: " + tail);
        
        // Print the size and contents of the deque
        System.out.println("Size of deque: " + deque.size());
        System.out.println("Elements in deque: " + deque);
    }
}
