should you connect to the hardware during the object constructor? or have a seperate connect function?

> I prefer to have a seperate connect function, because it allows for the creation of our object representing the hardware before we actually want to connect to the hardware.

Is this a good idea if all of the functions require you to connect to the device anyway? having a seperate connect function means you have to verify the connection at the start of every function.

> Can you reasonably assume that the hardware will be available to connect to when it's constructed?

how do you handle functions which require a connection before they can be run if the conenct function is not part of the constructor?

> I can't think of a better way than a runtime check for a connection at the start of every function. Maybe it is better to have the object always connect to the hardware as part of the constructor. We can always use a pointer and actually create the object later.