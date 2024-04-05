function solve(arr){
    let ansarr = Array.from(new Set(arr));
    return ansarr;
}
z
let arr = [1,2,3,2,2,3,5];
let ans = solve(arr);
console.log(ans);

// function check(num1 , num2 , num3){
//     if(num1%10 == num2%10 && num2%10 == num3%10){
//         return true;
//     }else{
//         return false
//     }
// }

// let num1 = 123;
// let num2 = 322;
// let num3 = 223;

// console.log(check(num1,num2,num3));


// let arr = [1,2,3,2,2,3,5];
// let i = 0;
// let j = arr.length -1;
//     while (i<=j) {
//         let temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;  
        
//         i++;
//         j--;
//     }
// console.log(arr);


let num = 321;
let rev = 0;
while (num>0) {
    let rem = num % 10;
    rev = rev * 10 + rem;
    num  = Math.floor(num / 10);
}
console.log(rev);