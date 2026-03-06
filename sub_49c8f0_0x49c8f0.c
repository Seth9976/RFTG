// 函数名称: sub_49c8f0
// 虚拟地址: 0x49c8f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49c8f0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    
    if (arg2 == 0)
        sub_49b2a0()
        noreturn
    
    if (arg3 s< 0)
        sub_49b2a0()
        noreturn
    
    int32_t result = 0
    int32_t i = sx.d(*(arg2 + ((arg3 * 0x5a + arg4) << 1) + 0x40))
    
    if (i s< 0xffffffff)
        sub_49b2a0()
        noreturn
    
    while (i != 0xffffffff)
        i = sx.d(*(arg2 + ((i * 5 + 0x11d) << 2)))
        result += 1
    
    return result
}
