// 函数名称: sub_435f20
// 虚拟地址: 0x435f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_435f20(int32_t arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t entry_result
    void var_24
    int80_t st0
    
    if (arg3 == 0xffffffff)
        st0, eax_1 = sub_434d40(&var_24, arg2, arg1, &var_24)
    else
        int80_t st0_1
        
        if (arg3 != 0)
            int32_t eax_2 = sub_46b360(arg3)
            void* edx = data_27e7a40
            
            if (eax_2 == *(*(edx + 0x548) + 0xbfb0))
                int32_t eax_3
                int80_t st0_2
                st0_2, eax_3 = sub_435690(eax_2, &var_24, arg3, &var_24, arg1)
                __builtin_memcpy(entry_result, eax_3, 0x20)
                return entry_result
            
            int80_t st0_3
            st0_3, eax_1 = sub_4352a0(&var_24, edx, arg3, &var_24)
        else
            st0_1, eax_1 = sub_434fe0(arg1, arg2, arg1, &var_24)
    __builtin_memcpy(entry_result, eax_1, 0x20)
    return entry_result
}
