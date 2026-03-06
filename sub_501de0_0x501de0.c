// 函数名称: sub_501de0
// 虚拟地址: 0x501de0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_501de0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: void* entry_ebx
    void* entry_ebx
    int32_t edi = *(entry_ebx + 8)
    int32_t edi_1 = neg.d(edi)
    int32_t i = neg.d(sbb.d(edi_1, edi_1, edi != 0)) - 1
    uint32_t eax
    
    while (i != 0xffffffff)
        int32_t eax_3 = i * 0xf
        i += 1
        int32_t* esi_1 = *(entry_ebx + 4) + (eax_3 << 2)
        
        if (i s>= *(entry_ebx + 8))
            i = 0xffffffff
        
        eax = esi_1[0xa]
        
        if ((eax.b & 8) == 0 && *(esi_1[3] + 0x10) != 6 && (eax.b & 0x40) == 0)
            char* eax_5 = sub_4c4410(arg2)
            uint32_t edx_2
            eax, edx_2 = sub_5a9697(esi_1[1], eax_5)
            
            if (eax == 0)
                int32_t var_10_2 = arg1
                sub_501cb0(arg2, esi_1, edx_2)
                char* eax_8
                eax_8.b = 1
                return eax_8
    
    eax.b = 0
    return eax
}
