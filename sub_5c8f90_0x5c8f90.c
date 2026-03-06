// 函数名称: sub_5c8f90
// 虚拟地址: 0x5c8f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c8f90(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    void* eax = *(esi + 0xc)
    int32_t edi = *(esi + 8)
    int32_t var_c = 0
    
    if (edi s> 0)
        arg1 = eax
        int32_t eax_4
        
        do
            if (sub_5c8d00(arg2, arg1) == 0)
                return 0
            
            arg1 += 0x14
            eax_4 = var_c + 1
            var_c = eax_4
        while (eax_4 s< edi)
    
    int32_t ecx_1 = *(esi + 4)
    
    if (edi != ecx_1)
        goto label_5c900c
    
    int32_t var_1c_2 = (ecx_1 * 5 + 0xa0) * 4
    void* var_20_2 = eax
    eax = sub_5d0ae0()
    void* var_8_1 = eax
    
    if (eax == 0)
        return 0
    
    *(esi + 4) += 0x20
    *(esi + 0xc) = eax
    label_5c900c:
    int32_t* eax_5 = eax + edi * 0x14
    *eax_5 = *arg2
    eax_5[1] = arg2[1]
    eax_5[2] = arg2[2]
    eax_5[3] = arg2[3]
    eax_5[4] = arg2[4]
    *(esi + 8) += 1
    uint32_t (* var_1c_3)(void* arg1, void* arg2) = sub_5c8d00
    int32_t var_20_3 = 0x14
    int32_t var_24 = *(esi + 8)
    int32_t var_28 = *(esi + 0xc)
    sub_5d4d10()
    return 1
}
