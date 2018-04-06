using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace DoublyLinkedListCS
{
    class NodeContainer
    {
        Node head;
        Node last;
        int size;

        void AddToEnd(Node n)
        {
            if (last == null)
            {
                head = n;
                last = n;
            }
            else
            {
                last.pNext = n;
                n.pPrev = last;
                last = n;
            }
            size++;
        }

        public void CreateList()
        {
            Node nodeA = new Node("A", 12); //A
            this.AddToEnd(nodeA);
             

            Node nodeB = new Node("B", 2111); //B
            this.AddToEnd(nodeB);
             

            Node nodeC = new Node("C", 2121);
            this.AddToEnd(nodeC);
             

            Node nodeD = new Node("D", 211);
            this.AddToEnd(nodeD);
             

            Node nodeE = new Node("E", 1);
            this.AddToEnd(nodeE);
             

            Node nodeF = new Node("F", 1121);
            this.AddToEnd(nodeF);
             

            Node nodeG = new Node("G", 221);
            this.AddToEnd(nodeG);
             

            Node nodeH = new Node("H", 1111);
            this.AddToEnd(nodeH);
             

            Node nodeI = new Node("I", 11);
            this.AddToEnd(nodeI);
             

            Node nodeJ = new Node("J", 1222);
            this.AddToEnd(nodeJ);
             

            Node nodeK = new Node("K", 212);
            this.AddToEnd(nodeK);
             

            Node nodeL = new Node("L", 1211);
            this.AddToEnd(nodeL);
             

            Node nodeM = new Node("M", 22);
            this.AddToEnd(nodeM);
             

            Node nodeN = new Node("N", 21);
            this.AddToEnd(nodeN);
             

            Node nodeO = new Node("O", 222);
            this.AddToEnd(nodeO);
             

            Node nodeP = new Node("P", 1221);
            this.AddToEnd(nodeP);
             

            Node nodeQ = new Node("Q", 2212);
            this.AddToEnd(nodeQ);
             

            Node nodeR = new Node("R", 121);
            this.AddToEnd(nodeR);
             

            Node nodeS = new Node("S", 111);
            this.AddToEnd(nodeS);
             

            Node nodeT = new Node("T", 2);
            this.AddToEnd(nodeT);
             

            Node nodeU = new Node("U", 112);
            this.AddToEnd(nodeU);
             

            Node nodeV = new Node("V", 1112);
            this.AddToEnd(nodeV);
             

            Node nodeW = new Node("W", 122);
            this.AddToEnd(nodeW);
             

            Node nodeX = new Node("X", 2112);
            this.AddToEnd(nodeX);
             

            Node nodeY = new Node("Y", 2122);
            this.AddToEnd(nodeY);
             

            Node nodeZ = new Node("Z", 2211);
            this.AddToEnd(nodeZ);
             
        }

        public void PrintList()
        {
            if (size > 0)
            {
                Node current = head;
                while (current != null)
                {
                    Console.WriteLine("Node int: {0} \t Node char: {1}", current.intRepr, current.charRepr);
                    current = current.pNext;
                }
                Console.WriteLine("List Size: {0}", size);
            }
            else
            {
                Console.WriteLine("Empty List");
            }
        }

        public void DeleteNode(string s)
        {
            if (head != null)
            {
                Node current = head;
                while (current != null)
                {
                    if (current.charRepr == s)
                    {
                        if (current == head && current.pNext == null)
                        {
                            // only one node
                            current = null;
                            head = null;
                        }
                        else if (current == head)
                        {
                            // the first node
                            head = current.pNext;
                            current.pNext.pPrev = null;
                            current = null;
                        }
                        else if (current.pNext == null)
                        {
                            // the last node
                            current.pPrev.pNext = null;
                            current = null;
                        }
                        else
                        {
                            // a middle node
                            current.pPrev.pNext = current.pNext;
                            current.pNext.pPrev = current.pPrev;
                            current = null;
                        }
                        Console.WriteLine("Deleted {0} from the list.", s);
                        size--;
                        break;
                    }
                    current = current.pNext;
                }
            }
        }

        public void SortList()
        {
            if (head != null && head.pNext != null)
            {
                Node min = head;
                Node current = min.pNext;
                Node newHead = null;
                Node newTail = null;
                
                while (current != null)
                {
                    if (current.intRepr < min.intRepr)
                    {
                        min = current;
                    }
                    current = current.pNext;
                }
                
                if (min == head)
                {
                    head = min.pNext;
                    min.pNext.pPrev = null;
                }
                else if (min.pNext == null)
                {
                    min.pPrev.pNext = null;
                }
                else
                {
                    min.pNext.pPrev = min.pPrev;
                    min.pPrev.pNext = min.pNext;
                }
                min.pNext = null;
                min.pPrev = null;
                newHead = min;
                newTail = min;
                min = head;
                while (min != null && head != null)
                {
                    min = head;
                    current = min;
                    while (current != null)
                    {
                        if (current.intRepr < min.intRepr)
                        {
                            min = current;
                        }
                        current = current.pNext;
                    }
                    
                    if (min == head && min.pNext == null)
                    {
                        head = null;
                    }
                    else if (min == head)
                    {
                        head = min.pNext;
                        min.pNext.pPrev = null;
                    }
                    else if (min.pNext == null)
                    {
                        min.pPrev.pNext = null;
                    }
                    else
                    {
                        min.pNext.pPrev = min.pPrev;
                        min.pPrev.pNext = min.pNext;
                    }
                    min.pNext = null;
                    min.pPrev = newTail;
                    newTail.pNext = min;
                    newTail = min;

                    current = min.pNext;
                }

                head = newHead;
            }
        }
    }
}
