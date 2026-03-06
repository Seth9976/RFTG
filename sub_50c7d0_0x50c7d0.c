// 函数名称: sub_50c7d0
// 虚拟地址: 0x50c7d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_50c7d0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    
    if (arg1 != 0)
        int32_t* eax_1 = sub_50c140(arg1)
        
        if (eax_1[1] != 0)
            void var_30
            __builtin_memcpy(entry_result, sub_50c2d0(arg2, &var_30, *eax_1, &var_30, arg2), 0x28)
            return entry_result
    
    __builtin_memcpy(entry_result, 0x8c1380, 0x28)
    return entry_result
}
