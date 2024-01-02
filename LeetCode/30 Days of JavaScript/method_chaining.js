class Calculator {

    /** 
     * @param {number} value
     */
    constructor(value) {
        this.val = value;
        return this;
    }

    /** 
     * @param {number} value
     * @return {Calculator}
     */
    add(value) {
        this.val = this.val + value;
        return this;
    }

    /** 
     * @param {number} value
     * @return {Calculator}
     */
    subtract(value) {
        this.val = this.val - value;
        return this;
    }

    /** 
     * @param {number} value
     * @return {Calculator}
     */
    multiply(value) {
        this.val = this.val * value;
        return this;
    }

    /** 
     * @param {number} value
     * @return {Calculator}
     */
    divide(value) {
        if (value == 0)
            throw new Error("Division by zero is not allowed")
        this.val = this.val / value;
        return this;
    }

    /** 
     * @param {number} value
     * @return {Calculator}
     */
    power(value) {
        this.val = this.val ** value;
        return this;
    }

    /** 
     * @return {number}
     */
    getResult() {
        return this.val;
    }
}


try{
const res = new Calculator(20).divide(0).getResult();
console.log(res)}
catch (error) {
    console.log(error);  // Prints: Division by zero is not allowed
}