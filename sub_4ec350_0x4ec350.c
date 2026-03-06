// 函数名称: sub_4ec350
// 虚拟地址: 0x4ec350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4ec350(void* arg1 @ edi, long double arg2 @ st0, int32_t* arg3)
{
    // 第一条实际指令: int32_t* result
    int32_t* result
    void* esi_1
    
    if (*(arg1 + 0x40) != 0)
        esi_1 = *(arg1 + 0x30)
        result = sub_466320(**(esi_1 + 0x2e4))
    
    if (*(arg1 + 0x40) == 0 || *(*(esi_1 + 0x2dc) * 0x134 + *result + 0xdd) == 0)
        sub_4eb7e0(arg3, *(arg1 + 0x30))
        
        if ((data_3160084.b & 1) == 0)
            long double x87_r0 = fconvert.t(data_be1abc)
            data_3160084 |= 1
            data_316007c = fconvert.s(x87_r0 / fconvert.t(360.0))
        
        result = *(arg1 + 0x30)
        *(arg1 + 0x24) = fconvert.s(
            fconvert.t(fconvert.s(fconvert.t(data_316007c) * fconvert.t(fconvert.s(arg2))))
            * fconvert.t(*(result[0xb9] + 0x58)) + fconvert.t(*(arg1 + 0x24)))
    
    return result
}
