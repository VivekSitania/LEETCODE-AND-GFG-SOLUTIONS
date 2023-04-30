/**
 * @param {any} object
 * @return {string}
 */
var jsonStringify = function(object) {
    let result = '';
    if(typeof object !== 'object'){
        result += typeof(object) === 'string' ? `"${object}"` : object
    }// typeof null is object so null is handled in else if
    else if(object === null) return "null";
    else{
        const isArray = Array.isArray(object);
        result += isArray? '[':'{' 
        const keys = Object.keys(object)
        keys.forEach((k, i)=>{
             result += !isArray ? `"${k}":${jsonStringify(object[k])}` : jsonStringify(object[k])
            if(i !== keys.length-1 ){
                result += ','
            }
           
        })
        result += isArray ? ']' : '}';
    }
    return result
};