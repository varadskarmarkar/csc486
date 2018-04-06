using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace DoublyLinkedListCS
{
    class Test
    {
        public void test1()
        {
            NodeContainer nodes = new NodeContainer();

            Console.WriteLine("Test 1: Insert data to a List\n");

            nodes.CreateList();
            nodes.PrintList();
        }

        public void test2()
        {
            Console.WriteLine();
            Console.WriteLine("Test 2: Find and delete nodes of a List\n");
            NodeContainer nodes = new NodeContainer();
            nodes.CreateList();
            nodes.DeleteNode("F");
            nodes.DeleteNode("R");
            nodes.DeleteNode("B");
            nodes.DeleteNode("Z");
            nodes.DeleteNode("A");
            nodes.DeleteNode("M");
            nodes.DeleteNode("G");
            nodes.DeleteNode("R");
            nodes.DeleteNode("C");
            nodes.DeleteNode("Q");
            nodes.DeleteNode("Y");
            nodes.DeleteNode("C");
            nodes.DeleteNode("N");
            Console.WriteLine();
            Console.WriteLine("List after deletions:");
            nodes.PrintList();
        }

        public void test3()
        {
            Console.WriteLine();
            Console.WriteLine("Test 3: Sort the data");
            NodeContainer nodes = new NodeContainer();
            nodes.CreateList();
            nodes.SortList();
            Console.WriteLine();
            Console.WriteLine("List after sorting:");
            nodes.PrintList();
        }
    }
}
