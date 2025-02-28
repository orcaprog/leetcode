/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
      let array = [];
    arr.forEach((n,i)=>{
       array.push(fn(n,i))
    })
    return array
};