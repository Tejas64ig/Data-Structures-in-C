class Node {
    int Data;
    Node Next;

    Node(int val) {
        Data = val;
        Next = null;
    }
}

public class Main {

    static Node deleteAtPosition(Node Head , int posi) {
        if(Head==null){
            System.out.println("INvaild");
            return Head;
        }
        if (posi==1){
            if (posi== 1) {
                return Head.Next; //Java automatically removes unreachable nodes (GC)
                                  //head is updated by returning new value
            }
            Node temp = Head;

            // traverse till posi-1
            for (int i = 1; i < posi - 1 && temp.Next != null; i++) {
                temp = temp.Next;
            }

            temp.Next = temp.Next.Next;

            return Head;
        }

        }
    }
    }
