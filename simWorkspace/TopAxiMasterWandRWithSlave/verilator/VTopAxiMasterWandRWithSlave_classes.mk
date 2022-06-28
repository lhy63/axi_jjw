# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTopAxiMasterWandRWithSlave.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VTopAxiMasterWandRWithSlave \
	VTopAxiMasterWandRWithSlave___024root__DepSet_h99957969__0 \
	VTopAxiMasterWandRWithSlave___024root__DepSet_hf46ce158__0 \
	VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave__DepSet_he06e534f__0 \
	VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave__DepSet_h2b4c8d9b__0 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__0 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__1 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__2 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__3 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__4 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__5 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__6 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__7 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__8 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__9 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__10 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__11 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__12 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__13 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__14 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__15 \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__16 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTopAxiMasterWandRWithSlave__ConstPool_0 \
	VTopAxiMasterWandRWithSlave___024root__Slow \
	VTopAxiMasterWandRWithSlave___024root__DepSet_h99957969__0__Slow \
	VTopAxiMasterWandRWithSlave___024root__DepSet_hf46ce158__0__Slow \
	VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave__Slow \
	VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave__DepSet_he06e534f__0__Slow \
	VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave__DepSet_h2b4c8d9b__0__Slow \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__Slow \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_h4824d4c3__0__Slow \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_h4824d4c3__1__Slow \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_h4824d4c3__2__Slow \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_h4824d4c3__3__Slow \
	VTopAxiMasterWandRWithSlave_Axi4_transmission__DepSet_hda9408f2__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTopAxiMasterWandRWithSlave__Dpi \
	VTopAxiMasterWandRWithSlave__Trace__0 \
	VTopAxiMasterWandRWithSlave__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTopAxiMasterWandRWithSlave__Syms \
	VTopAxiMasterWandRWithSlave__Trace__0__Slow \
	VTopAxiMasterWandRWithSlave__Trace__1__Slow \
	VTopAxiMasterWandRWithSlave__Trace__2__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
