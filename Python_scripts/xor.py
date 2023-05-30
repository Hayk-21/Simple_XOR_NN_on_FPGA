import random

# Define the sigmoid activation function
def sigmoid(x):
    return 1 / (1 + exp(-x))

# Define the exp function
def exp(x):
    return 1 + x + (x**2)/2 + (x**3)/6 + (x**4)/24 + (x**5)/120


class XORNeuralNetwork:
    def __init__(self, input_nodes, hidden_nodes, output_nodes):
        self.input_nodes = input_nodes
        self.hidden_nodes = hidden_nodes
        self.output_nodes = output_nodes
        self.weights_ih = [[round(random.uniform(-1, 1), 3) for _ in range(hidden_nodes)] for _ in range(input_nodes)]
        self.weights_ho = [[round(random.uniform(-1, 1), 3) for _ in range(output_nodes)] for _ in range(hidden_nodes)]
        self.bias_h = [round(random.uniform(-1, 1), 3) for _ in range(hidden_nodes)]
        self.bias_o = [round(random.uniform(-1, 1), 3) for _ in range(output_nodes)]
        self.hidden = [0] * self.hidden_nodes
        
        print(f'weights_ih: {self.weights_ih}, weights_ho: {self.weights_ho}')
        print(f'bias_h: {self.bias_h}, bias_o: {self.bias_o}')
        print(f'hidden: {self.hidden}')
    
    def sigmoid(self, x):
        return 1 / (1 + exp(-x))

    def feedforward(self, inputs):
        # Calculate hidden layer
        for i in range(self.hidden_nodes):
            hidden_sum = 0
            for j in range(self.input_nodes):
                hidden_sum += inputs[j] * self.weights_ih[j][i]
            hidden_sum += self.bias_h[i]
            self.hidden[i] = self.sigmoid(hidden_sum)
            
        # Calculate output layer
        output = [0] * self.output_nodes
        for i in range(self.output_nodes):
            output_sum = 0
            for j in range(self.hidden_nodes):
                output_sum += self.hidden[j] * self.weights_ho[j][i]
            output_sum += self.bias_o[i]
            output[i] = round(self.sigmoid(output_sum), 3)
        self.output = output
        return output
    
    def predict(self):
        if self.output[0] > 0.5:
            pred = 1
        else:
            pred = 0
        return pred
    
    def accuracy(self, inputs, expected_outputs):
        num_correct = 0
        for i in range(len(inputs)):
            self.feedforward(inputs[i])
            pred = self.predict()
            if pred == expected_outputs[i][0]:
                num_correct += 1
                
        accuracy = num_correct / len(inputs) * 100
        return accuracy

nn = XORNeuralNetwork(2, 4, 1)


# Train the neural network
learning_rate = 0.1
inputs_list = [[0, 0], [0, 1], [1, 0], [1, 1]]
targets_list = [[0], [1], [1], [0]]
for i in range(20000):
    
    for j in range(len(inputs_list)):
        inputs = inputs_list[j]
        target = targets_list[j]
        output = nn.feedforward(inputs)
        error = target[0] - output[0]
        delta_output = [error * output[i] * (1 - output[i]) for i in range(nn.output_nodes)]
        nn.bias_o[0] += delta_output[0] * learning_rate
        for k in range(nn.hidden_nodes):
            nn.weights_ho[k][0] += delta_output[0] * nn.hidden[k] * learning_rate
        delta_hidden = [nn.hidden[k] * (1 - nn.hidden[k]) * sum([delta_output[l] * nn.weights_ho[k][l] for l in range(nn.output_nodes)]) for k in range(nn.hidden_nodes)]
        for k in range(nn.input_nodes):
            for l in range(nn.hidden_nodes):
                nn.weights_ih[k][l] += delta_hidden[l] * inputs[k] * learning_rate
            
        nn.bias_h = [nn.bias_h[k] + delta_hidden[k] * learning_rate for k in range(nn.hidden_nodes)]
        
    accuracy = nn.accuracy(inputs_list, targets_list)
    if i % 100 == 0:
        print(f'Epoch: {i}, \tAccuracy: {accuracy}%')

    if accuracy >= 95:
        print(f'Training has been suspended by Accuracy: {accuracy}% Epoches: {i}')
        break
    
    
    # Test the neural network
print(inputs_list)
print(targets_list)
for i in range(len(inputs_list)):
    
    output = nn.feedforward(inputs_list[i])
    
    print(f'{inputs_list[i]} XOR {inputs_list[i]} = {nn.predict()}')
    nn.accuracy(inputs_list, targets_list)
    # nn.feed_forward([inputs[i][0], int(not inputs[i][1])])
    
    
    def DecimalToBinary(num):
        return str(bin(num).replace("0b", ""))
    
def get_bin(number, int_len = 5, frac_len = 10):
    int_part = abs(int(number))
    frac_part = str(number).split(".")[1]
    frac_part = 0 if frac_part[0] == '0' else int(frac_part)
    sign = "0" if (number >= 0) else "1"
    
    # Making Fractional part to binar string    
    while len(DecimalToBinary(frac_part)) > frac_len:
        frac_part = int(str(frac_part)[:-1])
    frac_part = "0"*(frac_len - len(DecimalToBinary(frac_part))) + DecimalToBinary(frac_part)
    
    # Making Integer part to binar string    
    if len(DecimalToBinary(int_part)) > int_len:
        int_part = "1"*int_len
    else:
        int_part = "0"*(int_len - len(DecimalToBinary(int_part))) + DecimalToBinary(int_part)
    
    # Sum all parts and return
    return sign + int_part + frac_part

def float_to_binary(num):
    # Check if input is a float
    if not isinstance(num, float):
        raise ValueError("Input must be a float.")

    # Check if input is negative
    is_negative = False
    if num < 0:
        is_negative = True
        num = abs(num)

    # Extract the integer and decimal parts of the float
    int_part = int(num)
    dec_part = num - int_part

    # Convert the integer part to binary
    int_binary = bin(int_part)[2:]  # [2:] to remove '0b' prefix

    # Convert the decimal part to binary with increased precision
    dec_binary = ''
    max_precision = 12  # Maximum number of decimal places
    while dec_part != 0 and len(dec_binary) < max_precision:
        dec_part *= 2
        if dec_part >= 1:
            dec_binary += '1'
            dec_part -= 1
        else:
            dec_binary += '0'

    # Combine the integer and decimal binary representations
    binary = int_binary + '.' + dec_binary

    # Add trailing zeros to match the desired precision
    binary += '0' * (max_precision - len(dec_binary))
    
    # Add a '-' sign if the input was negative
    if is_negative:
        binary = '-' + binary

    # Remove trailing zeros from the decimal part
    binary = binary.rstrip('0').rstrip('.') if '.' in binary else binary

    return binary

import struct

def float_to_32bit_float(f):
    # Convert the float to a 32-bit binary representation
    binary_rep = struct.pack('>f', f)
    
    # Extract the 32-bit floating point number as an integer
    int_rep = struct.unpack('>I', binary_rep)[0]
    
    # Return the 32-bit floating point number as a binary string
    return '{:032b}'.format(int_rep)

# Example usage
float_num = 3.14159
binary_rep = float_to_32bit_float(float_num)
print("Float Number:", float_num)
print("32-bit Floating Point Binary Representation:", binary_rep)

def var_to_bin(variable, name):
    with open("data.mem", "a") as file:
        file.write("\t// "+name+"\n")
        if type(variable) == list:
            for i in range(len(variable)):
                if type(variable[i]) == list:
                    for j in range(len(variable[i])):
                        text = f"\t{name}[{i}][{j}] = 32'b" + float_to_32bit_float(variable[i][j])+";\n"
                        file.write(text) 
                else:
                    text = f"\t{name}[{i}] = 32'b" + float_to_32bit_float(variable[i])+";\n"
                    file.write(text) 
        else: 
            text = f"\t{name} = 32'b" + float_to_32bit_float(variable)+";\n"
            file.write(text)
        file.write("\n")
        
var_to_bin(nn.weights_ih, "weights_ih")
var_to_bin(nn.weights_ho, "weights_ho")
var_to_bin(nn.bias_h, "bias_h")
var_to_bin(nn.bias_o, "bias_o")
