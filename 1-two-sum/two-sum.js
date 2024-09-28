/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let map1 = new Map;
    let array;
    for(let i = 0 ; i <nums.length;i++)
    {
        let num = nums[i];

        let deff = target - num;
        if(map1.has(deff))
        {
            array = [map1.get(deff),i];
            return array;
        }
        map1.set(num,i);
    }
    return []
}