// 函数名称: sub_658210
// 虚拟地址: 0x658210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_658210(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 8)
    int32_t ecx = *(arg1 + 8)
    int32_t temp0 = divs.dp.d(sx.q(arg2), ecx)
    int128_t* eax_8 = *(arg1 + 0xa0)
    sub_5a6c10(eax_8, eax_8 + (temp0 << 2), ((divs.dp.d(sx.q(*(arg1 + 0xa8)), ecx) - temp0) << 2) + 8)
    int32_t result = *(arg1 + 0xac)
    *(arg1 + 0xa8) -= arg2
    
    if (result s>= 0)
        result -= arg2
        *(arg1 + 0xac) = result
    
    *(arg1 + 0xb0) -= arg2
    return result
}
