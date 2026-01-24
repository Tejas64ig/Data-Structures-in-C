public class Main{
    public static class Node {
        int Data;
        Node Next;
        Node(int val){
            Data=val;
            Next = null;
        }
      //  Node Head = null;

        public static Node Reverse(Node Head)
        {
            Node Temp= null;

          Temp  =Head.Next;




            return Head;
        }

    }
}