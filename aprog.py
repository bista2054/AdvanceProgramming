def outer_function(x):
    def inner_function(y):
        return x + y  # x is captured from the outer scope (closure)
    return inner_function

closure = outer_function(10)
result = closure(5)  # Returns 15
print(result)

# Dynamic typing example
value = 10
print(value)
value = "Hello"  # No error, type changed dynamically
print(value)