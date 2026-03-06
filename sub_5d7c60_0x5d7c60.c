// 函数名称: sub_5d7c60
// 虚拟地址: 0x5d7c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5d7c60(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 8)
    if (arg2 != 8)
        return 
    
    int32_t i = 0
    void* edi_2 = arg1 + 2
    
    do
        int32_t eax_2 = i & 0xe0
        *(edi_2 - 2) = (eax_2 s>> 6).b | (eax_2 s>> 3).b | eax_2.b
        int32_t eax_7 = (i & 0x1c) * 8
        *(edi_2 - 1) = (eax_7 s>> 6).b | (eax_7 s>> 3).b | eax_7.b
        int32_t eax_9 = i & 3
        char eax = eax_9.b | (eax_9 << 2).b
        *edi_2 = eax << 4 | eax
        *(edi_2 + 1) = 0xff
        i += 1
        edi_2 += 4
    while (i s< 0x100)
}
