// 函数名称: sub_5c7830
// 虚拟地址: 0x5c7830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5c7830(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = arg1
    int32_t ebx = arg1
    uint32_t esi = zx.d((ebx u>> 8).b)
    int32_t edx = *((esi << 2) + &data_bed360)
    uint32_t eax_1
    
    if (edx != 0)
        eax_1 = zx.d(ebx.b)
    
    uint32_t result
    
    if (edx == 0 || (*(edx + (eax_1 u>> 5 << 2)) & 1 << (eax_1.b & 0x1f)) == 0)
        arg1:3.b = 1
        result.b = 1
    else
        result.b = 0
        arg1:3.b = 0
    
    if (arg2 != zx.d(result.b))
        if (arg2 == 0)
            if (edx == 0)
                int32_t var_14_1 = 0x20
                int32_t var_18_1 = 1
                result = sub_5d0ad0()
                *((esi << 2) + &data_bed360) = result
            
            if (edx != 0 || result != 0)
                uint32_t ecx_8 = zx.d(ebx.b)
                int32_t* eax_3 = *((esi << 2) + &data_bed360) + (ecx_8 u>> 5 << 2)
                *eax_3 |= 1 << (ecx_8.b & 0x1f)
                sub_5c7810(ebx)
            
            result.b = arg1:3.b
        else if (arg2 == 1)
            uint32_t ecx_6 = zx.d(ebx.b)
            int32_t* edx_1 = edx + (ecx_6 u>> 5 << 2)
            *edx_1 &= not.d(1 << (ecx_6.b & 0x1f))
    
    return result
}
