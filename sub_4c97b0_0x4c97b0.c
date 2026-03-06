// 函数名称: sub_4c97b0
// 虚拟地址: 0x4c97b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4c97b0(int32_t arg1, int32_t arg2, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t result = arg1 - 1
    int32_t result = arg1 - 1
    int32_t ecx = 0
    int32_t result_1 = result
    
    if (result s> 0)
        int32_t esi_1 = arg2 - 1
        int32_t var_8_1 = esi_1
        
        while (true)
            if (ecx s> esi_1)
                sub_4c5870("min <= max", &data_83f3d3, "Random.cpp", 0xd3, "RandomLCIntRange")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (esi_1 - ecx + 1 s<= 0)
                sub_4c5870("maxPlusOne > 0", &data_83f3d3, "Random.cpp", 0xcd, "RandomLCInt")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* entry_ebx
            int32_t eax_2 = *entry_ebx * 0x41c64e6d + 0x3039
            *entry_ebx = eax_2
            result = *(arg3 + (ecx << 2))
            int32_t edx_2 = modu.dp.d(0:eax_2, esi_1 - ecx + 1) + ecx
            *(arg3 + (ecx << 2)) = *(arg3 + (edx_2 << 2))
            ecx += 1
            *(arg3 + (edx_2 << 2)) = result
            
            if (ecx s>= result_1)
                break
            
            esi_1 = var_8_1
    
    return result
}
