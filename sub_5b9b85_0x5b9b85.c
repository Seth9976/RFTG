// 函数名称: sub_5b9b85
// 虚拟地址: 0x5b9b85
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5b9b85(void* arg1 @ ebp, int32_t* arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: if (*(arg1 - 0x1c) == arg3)
    if (*(arg1 - 0x1c) == arg3)
        return 
    
    if (*(arg1 - 0x20) != arg3)
        int32_t eax_1 = *arg2
        char* eax_4 = (&data_3166ee0)[eax_1 s>> 5] + ((eax_1 & 0x1f) << 6) + 4
        *eax_4 &= 0xfe
    
    sub_5afb13(*arg2)
}
