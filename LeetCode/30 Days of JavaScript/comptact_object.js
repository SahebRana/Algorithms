/**
 * @param {Object|Array} obj
 * @return {Object|Array}
 */
var compactObject = function (obj) {
    function recursive(items) {
        const isArray = Array.isArray(items);
        let holder = isArray ? [] : {};
        if (isArray) {
            items.forEach(item => {
                if (Boolean(item) && (typeof item == 'object')) {
                    holder.push(recursive(item));
                }
                else if (Boolean(item)) {
                    holder.push(item);
                }
            })
            return holder;
        }
        else {
            const keys = Object.keys(items);
            keys.forEach(index => {
                const item = items[index];
                if (Boolean(item) && (typeof item == 'object')) {
                    holder[index] = recursive(item)
                }
                else if (Boolean(item)) {
                    holder[index] = item
                }
            })
            return holder;
        }


    }
    return recursive(obj)
};

ans = compactObject([null, 0, false, { a: { d: {}, b: false } }])
console.dir( ans)

