// 函数名称: sub_4ebb60
// 虚拟地址: 0x4ebb60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4ebb60(void* arg1 @ edi, long double arg2 @ st0, int32_t* arg3)
{
    // 第一条实际指令: int32_t* result
    int32_t* result
    void* esi_1
    
    if (*(arg1 + 0x40) != 0)
        esi_1 = *(arg1 + 0x30)
        result = sub_466320(**(esi_1 + 0x2e4))
    
    if (*(arg1 + 0x40) == 0 || *(*(esi_1 + 0x2dc) * 0x134 + *result + 0xdd) == 0)
        result = sub_4eb7e0(arg3, *(arg1 + 0x30))
        *(arg1 + 0x28) = fconvert.s(fconvert.t(*(arg1 + 0x28)) + fconvert.t(fconvert.s(arg2)))
    
    return result
}
