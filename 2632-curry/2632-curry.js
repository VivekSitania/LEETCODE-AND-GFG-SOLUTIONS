/**

 * @param {Function} fn

 * @return {Function}

 */

var curry = function (fn) {

  const argsCache = [];

  function curried(...args) {

    argsCache.push(...args);

    if (argsCache.length === fn.length) {

      return fn(...argsCache);

    }

    return curried;

  }

  return curried;

};