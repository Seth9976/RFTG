// 函数名称: sub_65c550
// 虚拟地址: 0x65c550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_65c550(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = *(arg1 + (arg3 << 2))
    int32_t result = *(arg1 + (arg3 << 2))
    
    if (result s< 0)
        return *(arg2 + (arg3 << 2))
    
    int32_t ecx = *(arg2 + (arg3 << 2))
    
    if (ecx s< 0)
        return result
    
    return (result + ecx) s>> 1
}
