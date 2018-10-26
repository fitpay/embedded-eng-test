# embedded-eng-test

### Goal ###

Decode the packed `input_data`.  The `input_data` represents 8 channels of data, 12 bits per channel.  The data is in big endian format and the first channel's hex representation is `0xF02`.  The lower 8 bits is the channel's value, while the upper 4 bits represent status.  Parity for each decoded channel must be calculated using even parity.  

##### Key for the Packed Data

```
[0:7] - value  
[8]   - flag_a  
[9]   - flag_b  
[10]  - flag_c  
[11]  - status  
```

### Requirements ###

* The final decoded output shall be stored in an array of structs.  
* Do not modify any of the existing structs, enums, or function definitions.
* Print the contents of the decoded data to the console
