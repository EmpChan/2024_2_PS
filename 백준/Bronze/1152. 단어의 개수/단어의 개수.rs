use std::io;

fn main(){
    let mut s = String::new();
    let mut ans = 0;
    io::stdin().read_line(&mut s);

    for w in s.split_whitespace(){
        ans+=1;
    }
    println!("{ans}");
}