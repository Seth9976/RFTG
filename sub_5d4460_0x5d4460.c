// 函数名称: sub_5d4460
// 虚拟地址: 0x5d4460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d4460(int32_t arg1)
{
    // 第一条实际指令: uint32_t i = GetCurrentThreadId()
    uint32_t i = GetCurrentThreadId()
    sub_5d1190(data_bf7c34)
    uint32_t* esi = data_bf7c48
    uint32_t* eax_1 = nullptr
    
    if (esi == 0)
    label_5d4493:
        int32_t var_10_1 = 0xc
        esi = sub_5d0ac0()
        
        if (esi != 0)
            int32_t ecx_1 = data_bf7c48
            *esi = i
            esi[1] = arg1
            esi[2] = ecx_1
            data_bf7c48 = esi
    else
        while (*esi != i)
            eax_1 = esi
            esi = esi[2]
            
            if (esi == 0)
                goto label_5d4493
        
        if (arg1 != 0)
            esi[1] = arg1
        else if (eax_1 == 0)
            uint32_t* var_10_4 = esi
            data_bf7c48 = esi[2]
            sub_5d0af0()
        else
            uint32_t* var_10_3 = esi
            eax_1[2] = esi[2]
            sub_5d0af0()
    
    sub_5d11c0(data_bf7c34)
    
    if (esi != 0)
        return 0
    
    sub_5cd050(0)
    return 0xffffffff
}
