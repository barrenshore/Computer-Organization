#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtest.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main() {
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    Vtest *dut = new Vtest;        // our DUT(Design Under Test)

    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd"); // open a waveform file to be write

    while (sim_time < MAX_SIM_TIME) {
        dut->clk ^= 1;             // tick the clock
        dut->eval();               // do evaluation
        m_trace->dump(sim_time);   // dump simulation result into vcd file.
        sim_time++;
    }

    m_trace->close();              // flush and close the file
    delete dut;
    exit(EXIT_SUCCESS);
}