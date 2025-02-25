/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    const f = (...args)=>"Hello World";
    return f
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */