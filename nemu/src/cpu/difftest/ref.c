/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if(direction == DIFFTEST_TO_REF)
  {
    for(unsigned int i=0;i<n;i++)
    {
      paddr_write(addr+i,1,*(uint8_t*)(buf+i));
    }
  }
  else
  {

  }
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {
  CPU_state* dut_cpu=(CPU_state*)dut;
  if(direction == DIFFTEST_TO_REF)
  {
    for(int i=0;i<MUXDEF(CONFIG_RVE, 16, 32);i++)
      cpu.gpr[i] = dut_cpu->gpr[i];
    cpu.pc = dut_cpu->pc;
  }
  else 
  {
    for(int i=0;i<MUXDEF(CONFIG_RVE, 16, 32);i++)
      dut_cpu->gpr[i]= cpu.gpr[i];
    dut_cpu->pc = cpu.pc;
  }
}

__EXPORT void difftest_exec(uint64_t n) {
  cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
