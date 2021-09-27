# x10-derived-class-viewed-as-base-class-f21

In this example, we look at the behavior when a object of a derived class is passed into a function taking a parameter which has type equal to the base class. We see that if we call a method which is declared virtual in the base class and overriden in the derived class, the override method is called, but if the derived class simply declares a method with the same name as the method in the base class, the method from the base class will be called.
