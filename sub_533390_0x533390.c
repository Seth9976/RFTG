// 函数名称: sub_533390
// 虚拟地址: 0x533390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_533390(int32_t* arg1 @ edi)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (*arg1 s<= 0)
        return 
    
    do
        int32_t eax_1 = arg1[1]
        int32_t ecx_1 = *(eax_1 + (i << 3) + 4)
        void* edx_1 = *(eax_1 + (i << 3))
        int32_t var_8_1 = ecx_1
        void* var_c_1 = edx_1
        int32_t* entry_ebx
        sub_530b60(entry_ebx, edx_1, ecx_1, &data_8beefc)
        i += 1
    while (i s< *arg1)
}
