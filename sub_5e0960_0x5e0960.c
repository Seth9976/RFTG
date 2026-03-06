// 函数名称: sub_5e0960
// 虚拟地址: 0x5e0960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e0960(void* arg1)
{
    // 第一条实际指令: int32_t* ecx = *(arg1 + 0x10)
    int32_t* ecx = *(arg1 + 0x10)
    uint32_t i_1 = *(arg1 + 0x18) u>> 2
    int32_t* edx = ecx
    
    if (i_1 != 0)
        uint32_t i
        
        do
            long double x87_r6_1 = float.t(*ecx)
            ecx = &ecx[1]
            edx = &edx[1]
            i = i_1
            i_1 -= 1
            edx[-1] = fconvert.s(x87_r6_1 * fconvert.t(4.6566128730773926e-10))
        while (i != 1)
    
    *(arg1 + 0x50) += 1
    int32_t eax_1 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_1 << 2) + 0x28) != 0)
        (*(arg1 + (eax_1 << 2) + 0x28))(arg1, 0x8120)
}
