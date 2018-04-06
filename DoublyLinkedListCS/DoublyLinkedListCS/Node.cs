using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace DoublyLinkedListCS
{
    class Node
    {
        public Node pNext;
        public Node pPrev;
        public string charRepr;
        public int intRepr;

        public Node()
        {
            pNext = null;
            pPrev = null;
            charRepr = "";
            intRepr = 0;
        }

        public Node(string s, int i)
        {
            pNext = null;
            pPrev = null;
            charRepr = s;
            intRepr = i;
        }
    }
}
