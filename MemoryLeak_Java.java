package org.user.splitwise;

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Heap allocation
        Integer x = new Integer(5);
        System.out.println("x = " + x);

        // Reference reassignment
        Integer y = x;
        System.out.println("y = " + y);

        // Nullifying reference
        x = null;

        // Garbage collection happens automatically
        System.gc(); // Hint to JVM (not guaranteed)

        // Memory leak simulation (unintentional retention)
        List<Integer> leakyList = new ArrayList<>();
        for (int i = 0; i < 1000000; i++) {
            leakyList.add(new Integer(i));
        }
    }

    @Override
    protected void finalize() throws Throwable {
        System.out.println("Garbage collection occurred");
    }
}
