// 函数名称: sub_5d5f00
// 虚拟地址: 0x5d5f00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d5f00(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0xffffffff
    
    void* eax_1 = *(arg1 + 0x34)
    int32_t edi = *(eax_1 + 0x44)
    *(eax_1 + 0x44) = edi & 0xffffff8f
    int32_t result = 0
    
    switch (arg2)
        case 0
            nop
        case 1
            void* eax_3 = *(arg1 + 0x34)
            *(eax_3 + 0x44) |= 0x10
        case 2
            void* eax_4 = *(arg1 + 0x34)
            *(eax_4 + 0x44) |= 0x20
        case 4
            void* eax_5 = *(arg1 + 0x34)
            *(eax_5 + 0x44) |= 0x40
        default
            sub_5cd050(4)
            result = 0xffffffff
    
    int32_t* esi_1 = *(arg1 + 0x34)
    
    if (esi_1[0x11] != edi)
        sub_5d8400(esi_1)
    
    return result
}
