// 函数名称: sub_49db30
// 虚拟地址: 0x49db30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49db30(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ esi, int32_t arg5)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t i = sx.d(*(arg2 + ((arg3 * 0x5a + arg5) << 1) + 0x40))
    
    while (i != 0xffffffff)
        *(arg4 + (result << 2)) = i
        i = sx.d(*(arg2 + ((i * 5 + 0x11d) << 2)))
        result += 1
    
    return result
}
