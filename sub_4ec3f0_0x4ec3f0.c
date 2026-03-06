// 函数名称: sub_4ec3f0
// 虚拟地址: 0x4ec3f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4ec3f0(void* arg1 @ esi, long double arg2 @ st0, long double arg3 @ st1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* result
    void* edi_1
    
    if (*(arg1 + 0x40) != 0)
        edi_1 = *(arg1 + 0x30)
        result = sub_466320(**(edi_1 + 0x2e4))
    
    if (*(arg1 + 0x40) == 0 || *(*(edi_1 + 0x2dc) * 0x134 + *result + 0xdd) == 0)
        int32_t* entry_ebx
        sub_4eb880(entry_ebx, *(arg1 + 0x30))
        sub_4eb7e0(entry_ebx, *(arg1 + 0x30))
        result = 1
        
        if ((data_3160084.b & 1) == 0)
            long double x87_r1_1 = fconvert.t(data_be1abc)
            data_3160084 |= 1
            data_316007c = fconvert.s(x87_r1_1 / fconvert.t(360.0))
        
        *(arg1 + 0x24) = fconvert.s(fconvert.t(fconvert.s(fconvert.t(data_316007c)
            * fconvert.t(fconvert.s(arg3 - fconvert.t(fconvert.s(arg2)))))) + fconvert.t(*(arg1 + 0x24)))
    
    return result
}
