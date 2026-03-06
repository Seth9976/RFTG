// 函数名称: sub_4f75f0
// 虚拟地址: 0x4f75f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4f75f0(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax_1 = *(arg1 + 0x1100)
    int32_t eax_1 = *(arg1 + 0x1100)
    
    if (eax_1 s<= 0)
        sub_4c5870("stack.numEntries > 0", &data_83f3d3, "UIDef.cpp", 0x675, "PopOne")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_4c5a30() __tailcall
        
        breakpoint
    
    int32_t result = eax_1 - 1
    
    if (eax_1 - 1 s>= 0)
        void* edx_1 = arg1 + result * 0x44 + 0x40
        int32_t result_1
        
        do
            int32_t ecx_4 = *edx_1
            
            if (ecx_4 s>= 0)
                if (ecx_4 != 1)
                    *edx_1 = ecx_4 - 1
                else
                    *(arg1 + 0x1100) -= 1
            
            edx_1 -= 0x44
            result_1 = result
            result -= 1
        while (result_1 - 1 s>= 0)
    
    return result
}
