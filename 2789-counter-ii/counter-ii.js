/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let old = init;
    return {
        increment: ()=>{
            return ++old;
        },
        decrement:()=>{
            return --old;
        },
        reset: ()=>{
            old = init;
            return old;
        }

    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */