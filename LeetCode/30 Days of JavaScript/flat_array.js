/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */
var flat = function (arr, n) {
    const len = arr.length;
    let ans = [];
    arr.forEach(item => {
        if (n > 0 && item instanceof Array) {
            ans = ans.concat(flat(item, n - 1))
        }
        else ans.push(item)
    })
    return ans;
};

aa = [1,2,3,[2,3,4],[3,4,5,[5,6]]]
console.log(flat(aa, 1000))