use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let mut iter = input.split_whitespace();
    let n: usize = iter.next().unwrap().parse().unwrap();
    let a: Vec<&str> = iter.take(n).collect();

    for i in 0..n.saturating_sub(1) {
        if a[i] == a[i + 1] {
            println!("0");
            return;
        }
    }

    println!("1");
}