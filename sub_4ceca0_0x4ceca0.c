// 函数名称: sub_4ceca0
// 虚拟地址: 0x4ceca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4ceca0(void* arg1, int32_t* arg2, int32_t* arg3 @ esi, int32_t* arg4 @ edi, int32_t arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t ecx_1 = *(arg1 + 0x10)
    
    if (ecx_1 s> 0 && ecx_1 s< 0x12)
        arg1.b = 1
        return arg1
    
    if (*(arg1 + 0xc) + arg3 u<= arg4 + arg2)
        return sub_4ce970(arg4, arg3, arg1, arg5, arg2)
    
    arg1.b = 0
    return arg1
}
