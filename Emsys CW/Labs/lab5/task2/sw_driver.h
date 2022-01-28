// Arduino-like software driver for the custom MMIO interface 
//
//  author: stf

// Function for writing to registers in the verilator simulation
extern void regWrite(uint32_t addr, uint32_t data); // *hw_ptr = data; 

// Function to read from a register in the verilator simulation
extern uint32_t regRead(uint32_t addr); // unsigned res = *hw_ptr; 

// Function to exit the simulation
extern void exit();

// Function to delay the processor by n clock cycles
extern void delay(uint32_t n);

// The hardware address map
const uint32_t timg0_t0config_reg = 0x3FF5F000;
const uint32_t timg0_t0lo_reg = 0x3FF5F004;
const uint32_t timg0_t0hi_reg = 0x3FF5F008;
const uint32_t timg0_t0update_reg = 0x3FF5F00C;
const uint32_t timg0_t0load_lo_reg = 0x3FF5F018;
const uint32_t timg0_t0load_hi_reg = 0x3FF5F01C;
const uint32_t timg0_t0load_reg = 0x3FF5F020;


// ------ IMPLEMENT THE FOLLOWING ----------------
void setupTimer(uint16_t divval) {
    // Implement the timerSetup function using regWrite 
	regWrite(timg0_t0config_reg, regRead(timg0_t0config_reg) | (1 << 31) | (1 << 30) | (divval << 13));
	regWrite(timg0_t0config_reg, regRead(timg0_t0config_reg) | (0 << 12) | (0 << 11) | (0 << 10));
}

void resetTimer() {
    // Implement the resetTimer function using regWrite
	regWrite(timg0_t0load_lo_reg, 0);
	regWrite(timg0_t0load_hi_reg, 0);
	regWrite(timg0_t0load_reg, 42);
}

uint64_t readTimer() {
    uint64_t t;
	uint32_t lo;
	uint32_t hi;
    // using readReg and regWrite implement the function to read the data from the hardware
	regWrite(timg0_t0update_reg, 1);
	
	lo = regRead(timg0_t0lo_reg);
	hi = regRead(timg0_t0hi_reg);
	t = lo | (hi << 32);
	
    return t;
}
// --------------- DONE -------------------------

void displayTimer() {
    fprintf(stderr, "Timer=%lu\n", readTimer());
}

uint32_t i;

// runs once on startup
void setup() {
    i=0;
    setupTimer(2); 
}


// runs continuously
void loop() {
    resetTimer();
    delay(50); // remember this is not in miliseconds but clock cycles 
    displayTimer();

    if(i < 10)
       i = i + 1;
    else
       exit();
}

