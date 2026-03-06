// 函数名称: sub_48bc00
// 虚拟地址: 0x48bc00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_48bc00(int32_t arg1 @ esi, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    
    if (arg3 s<= 0)
        return 
    
    int32_t* ebx_3 = arg2 * 0x1480 + 0x268a0a8
    
    do
        int32_t edx_1 = *ebx_3
        
        if (edx_1 s< 0)
            break
        
        int32_t eax_1 = edx_1 * 5
        int32_t ecx_1 = sx.d(*(arg1 + (eax_1 << 2) + 0x464))
        
        if (ecx_1 == arg2 && *(arg1 + (eax_1 << 2) + 0x465) == 2)
            int32_t var_10_1 = 1
            sub_49cc30(arg1, edx_1, ecx_1, 0xffffffff)
            edi += 1
            *(arg2 * 0xb4 + arg1 + 0xb0) -= 1
        
        ebx_3 = &ebx_3[4]
    while (edi s< arg3)
}
