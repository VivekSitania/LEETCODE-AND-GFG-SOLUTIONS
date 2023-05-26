/*class EventEmitter {
  subscribe(event, cb) {
      
    return {
        unsubscribe: () => {

        }
    };
  }

  emit(event, args = []) {

  }
}*/

class EventEmitter {

    constructor() {

        this.map = new Map();

    }

    subscribe(event, cb) {

        if (!this.map.has(event)) {

            this.map.set(event, []);

        }

        const arr = this.map.get(event);

        arr.push(cb);

        return {

            unsubscribe: () => {

                const index = arr.indexOf(cb);

                if (index !== -1) {

                    arr.splice(index, 1);

                }

            }

        };

    }

    emit(event, args = []) {

        const callbacks = this.map.get(event) || [];

        return callbacks.map(callback => callback(...args));

    }

}

/**

 * const emitter = new EventEmitter();

 *

 * // Subscribe to the onClick event with onClickCallback

 * function onClickCallback() { return 99 }

 * const sub = emitter.subscribe('onClick', onClickCallback);

 *

 * emitter.emit('onClick'); // [99]

 * sub.unsubscribe(); // undefined

 * emitter.emit('onClick'); // []

 */

/**
 * const emitter = new EventEmitter();
 *
 * // Subscribe to the onClick event with onClickCallback
 * function onClickCallback() { return 99 }
 * const sub = emitter.subscribe('onClick', onClickCallback);
 *
 * emitter.emit('onClick'); // [99]
 * sub.unsubscribe(); // undefined
 * emitter.emit('onClick'); // []
 */