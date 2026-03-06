// 函数名称: sub_4aa690
// 虚拟地址: 0x4aa690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4aa690(int32_t arg1, int32_t arg2, int32_t arg3 @ esi)
{
    // 第一条实际指令: int32_t i = sx.d(*(arg1 * 0xb4 + arg2 + 0x46))
    int32_t i = sx.d(*(arg1 * 0xb4 + arg2 + 0x46))
    int32_t result = 0
    
    for (; i != 0xffffffff; i = sx.d(*(arg2 + ((i * 5 + 0x11d) << 2))))
        if (*(arg2 + i * 0x14 + 0x472) != 0)
            *(arg3 + (result << 2)) = i
            result += 1
    
    return result
}
