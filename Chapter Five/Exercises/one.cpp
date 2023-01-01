// Exercise One
// What is wrong with the following prototype

int askNumber(int low = 1, int high);
// The issue with this prototype is that a paramter with a default is specificed
// before a parameter without a default. All parameters after a parameter with
// a default must also define a default. 