// 函数名称: sub_49a280
// 虚拟地址: 0x49a280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_49a280(void* arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: int32_t ecx = *arg2 + 1
    int32_t ecx = *arg2 + 1
    
    if (ecx s<= 0)
        sub_4c5870("maxPlusOne > 0", &data_83f3d3, "Random.cpp", 0xcd, "RandomLCInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_3 = *(arg1 + 0x10) * 0x41c64e6d + 0x3039
    int32_t edx = 0
    *(arg1 + 0x10) = eax_3
    uint32_t temp1 = modu.dp.d(edx:eax_3, ecx)
    int32_t edi
    
    if (temp1 != 0)
        return sub_4c97b0(1, *arg2, edi)
    *arg2 = temp1
    return divu.dp.d(edx:eax_3, ecx)
}
