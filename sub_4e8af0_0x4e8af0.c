// 函数名称: sub_4e8af0
// 虚拟地址: 0x4e8af0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4e8af0(int32_t* arg1, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t edx
    edx:eax = muls.dp.d(0x66666667, arg1[1])
    int32_t edx_1 = edx s>> 2
    int32_t eax_3 = (edx_1 u>> 0x1f) + edx_1
    int32_t edx_2 = *arg1
    
    if (eax_3 s<= 0)
        sub_4c5870("numValues > 0", &data_83f3d3, "Flanim.cpp", 0x300, 
            "FlanimGetUncompressedConstantVec2")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx = 1
    
    if (eax_3 != 1)
        while (zx.d(*(edx_2 + (eax_3 << 3) + (ecx << 1))) s<= arg2)
            ecx += 1
            
            if (ecx == eax_3)
                break
    
    *(edx_2 + (ecx << 3) - 4)
    return *(edx_2 + (ecx << 3) - 8)
}
