// 函数名称: sub_501000
// 虚拟地址: 0x501000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_501000(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 4)
    int32_t* esi = *(arg1 + 4)
    int32_t* edi_1
    
    do
        if (esi == 0)
            arg1.b = 0
            return arg1
        
        edi_1 = *esi
        char* const eax = *edi_1
        esi = esi[1]
        
        if (eax == 0)
            eax = &data_83f3d3
        
        char* entry_ebx
        arg1 = sub_5a9697(eax, entry_ebx)
    while (arg1 != 0)
    
    char* const edi_2 = edi_1[1]
    
    if (edi_2 == 0)
        edi_2 = &data_83f3d3
    
    int32_t var_14_2 = arg2
    sub_5a957c(edi_2, &data_85f660)
    int32_t eax_1
    eax_1.b = 1
    return eax_1
}
