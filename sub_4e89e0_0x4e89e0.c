// 函数名称: sub_4e89e0
// 虚拟地址: 0x4e89e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4e89e0(int32_t* arg1, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t edx
    edx:eax = muls.dp.d(0x2aaaaaab, arg1[1])
    int32_t eax_3 = (edx u>> 0x1f) + edx
    int32_t edx_1 = *arg1
    
    if (eax_3 s<= 0)
        sub_4c5870("numValues > 0", &data_83f3d3, "Flanim.cpp", 0x2d9, 
            "FlanimGetUncompressedConstantInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx = 1
    
    if (eax_3 != 1)
        while (zx.d(*(edx_1 + (eax_3 << 2) + (ecx << 1))) s<= arg2)
            ecx += 1
            
            if (ecx == eax_3)
                break
    
    return *(edx_1 + (ecx << 2) - 4)
}
