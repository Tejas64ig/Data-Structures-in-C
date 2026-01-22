public class Main {

    static class Node {
        int Data;
        Node Next;

        Node(int val) {
            Data = val;
            Next = null;
        }
    }

    // insert at start
    static Node Insert_At_Start(Node Head, int val) {
        Node p = new Node(val);
        p.Next = Head;
        return p;
    }

    static Node Insert_At_Last(Node Head, int val) {

        Node p = new Node(val);

        if (Head == null) {
            return p;
        }

        Node temp = Head;

        while (temp.Next != null) {
            temp = temp.Next;
        }
            temp.Next = p; // in java / p.next is ALREADY null we don;t have we define it
            return Head;
        }

    static Node Insert_At_Middle(Node Head,int posi, int val) {

        if((Head==null)&&(posi<=1)){
            return Insert_At_Start(Head, val);
    }


        Node p = new Node(val);
        Node temp = Head;
        int count = 1;

        while (count < posi - 1 && temp.Next != null) {
            temp = temp.Next;
            count++;
        }

        p.Next = temp.Next;
        temp.Next = p;

        return Head;
    }

    static void display(Node head) {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.Data + " ");
            temp = temp.Next;
        }
    }

    public static void main(String[] args) {

        Node head = null;

        head = Insert_At_Start(head, 10);     // start
        head = Insert_At_Middle(head, 2, 20); // middle
        head = Insert_At_Last(head, 30);       // end

        display(head);
    }
}
