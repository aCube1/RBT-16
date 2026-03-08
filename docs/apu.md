# Audio: codename - Cibo

- Output: 3.5mm mono jack + 1 RCA mono
- Chip: YM3812 (OPL2) + DAC
- Coprocessor: Z80
- APRAM: 64KB of SRAM; Accessible by the CPU
    - APRAM starts at 0xfb'0000 in CPU RAM
    - The last 256 bytes in APRAM are dedicated to APU registers

---

## Audio program

- Audio program is stored in the Audio RAM
- APU program loading and execution steps:
    1.  Stop APU execution
    2.  Reset MMIO registers
    3.  Write program into the Audio RAM
    4.  Reset APU and restart execution

---

> APU_MMIO: 0xfb'ff00

---

<!--
	(YAN) - Use the YM2413 OPLL FM chip as an alternative audio chip
	(aCube) - Find a cheap 64K SRAM chip, current options: A625308AM,
WS62256, AS6C1008-55PCN.
-->
