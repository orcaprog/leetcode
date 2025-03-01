/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const newArray=[];
    arr.forEach((elem,i)=>{
        
       fn(arr[i],i) &&  newArray.push(elem)
    })
return newArray;
};