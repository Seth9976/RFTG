// 函数名称: sub_50c290
// 虚拟地址: 0x50c290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_50c290(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: if (*(arg3 + 0x480) s<= *(arg3 + 0x5c))
    if (*(arg3 + 0x480) s<= *(arg3 + 0x5c))
        __builtin_memcpy(arg1, arg4 + 8, 0x24)
        return 
    
    __builtin_memcpy(arg1, arg3 + 0x484, 0x24)
}
