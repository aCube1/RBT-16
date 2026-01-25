# Audio: codename - Cibo

- Output: 3.5mm mono jack + 1 RCA mono
- Chip: YM3812 (OPL2) + DAC
- Coprocessor: Z80
- RAM: 64KB of SRAM; Accessible by the CPU

---

## Audio program

- Audio program is stored in the Audio RAM
- APU program loading and execution steps:
    1.  Stop APU execution
    2.  Reset MMIO registers
    3.  Write program into the Audio RAM
    4.  Reset APU and restart execution

---

> APU_ADDR: 0xf9'0000

---

<!--
	(YAN) - Use the YM2413 OPLL FM chip as the secondary audio chip
	(aCube) - Find a cheap 64K SRAM chip, current options: A625308AM,
WS62256, AS6C1008-55PCN.
-->
