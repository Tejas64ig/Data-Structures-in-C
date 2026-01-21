
public class Main {


    static class Node {
        int data;
        Node Next;
        private Node next;

        Node(int val) {
            data = val;
            Next = null;

        }

        static Node head = null;

        static Node getNode(int val) {
            return new Node(val);
        }

        static void display() {
            if (head == null) {
                return;
            }

            Node temp = head;
            while (temp != null) {
                System.out.print(temp.data + " ");
                temp = temp.next;
            }
        }

        public static void main(String[] args) {

            head = getNode(10);
            head.next = getNode(20);

            display();
        }
    }
}
