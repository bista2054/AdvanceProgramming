fn main() {
    // Heap allocation with Box
    let x = Box::new(5);
    println!("x = {}", x);
    
    // Move semantics
    let y = x;
    // println!("x = {}", x); // Compile error - value borrowed after move
    
    // Borrowing (immutable reference)
    print_number(&y);
    
    // Mutable borrowing
    let mut z = Box::new(10);
    increment_number(&mut z);
    println!("z = {}", z);
    
    // Memory automatically freed when variables go out of scope
}

fn print_number(num: &Box<i32>) {
    println!("Printing: {}", num);
}

fn increment_number(num: &mut Box<i32>) {
    **num += 1;
}
