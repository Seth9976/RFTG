// 函数名称: sub_50d440
// 虚拟地址: 0x50d440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_50d440(int32_t* arg1 @ edi)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    int32_t esi = *entry_ebx
    
    if (esi != 0)
        if (*(sub_4fc3d0(&data_be1cb8, esi) + 4) != arg1)
            sub_4f7100(*entry_ebx)
            void* eax
            int80_t st0_2
            st0_2, eax = sub_4f6f00(arg1)
            *entry_ebx = eax
    else if (arg1 != 0)
        int32_t eax_1
        int80_t st0_1
        st0_1, eax_1 = sub_4f6f00(arg1)
        *entry_ebx = eax_1
}
