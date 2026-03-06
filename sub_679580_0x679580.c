// 函数名称: sub_679580
// 虚拟地址: 0x679580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_679580(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1[6]
    int32_t* esi = arg1[6]
    uint32_t eax_1 = sub_5a9cf0(esi[8], 1, 0x1000, esi[7])
    
    if (eax_1 == 0)
        if (esi[9] != eax_1)
            *(*arg1 + 0x14) = 0x2a
            (**arg1)(arg1)
        
        *(*arg1 + 0x14) = 0x78
        (*(*arg1 + 4))(arg1, 0xffffffff)
        *esi[8] = 0xff
        *(esi[8] + 1) = 0xd9
        eax_1 = 2
    
    int32_t ecx_3 = esi[8]
    esi[1] = eax_1
    *esi = ecx_3
    esi[9] = 0
    return 1
}
