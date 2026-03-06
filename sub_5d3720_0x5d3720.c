// 函数名称: sub_5d3720
// 虚拟地址: 0x5d3720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d3720(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* ebx = nullptr
    void* ebx = nullptr
    int32_t i = 0
    int32_t var_c = 0
    int16_t esi = sub_5c8c60(arg1[1].w)
    
    if (arg2 != 0)
        int32_t var_10_1 = 0
        int32_t var_24 = arg2
        
        if (arg3 == 0)
            data_bf7c24(sub_5d36a0, &var_24)
        else
            data_bf7c28(sub_5d36a0, &var_24)
        
        if (var_10_1 == 0)
            sub_5cce60("DirectSound: Requested device not found")
            return 0xffffffff
        
        void var_20
        ebx = &var_20
    
    int32_t var_34_3 = 0x18
    int32_t eax_3 = sub_5d0ac0()
    arg1[0x28] = eax_3
    
    if (eax_3 == 0)
        sub_5cd050(eax_3)
        return 0xffffffff
    
    int32_t var_34_5 = 0x18
    int32_t var_38 = 0
    int32_t var_3c = eax_3
    sub_5cd100()
    int32_t eax_5 = data_bf7c20(ebx, arg1[0x28], 0)
    
    if (eax_5 != 0)
        sub_5d3470(arg1)
        sub_5d2f30(eax_5)
        return 0xffffffff
    
    do
        if (esi == 0)
            if (i != 0)
                break
            
            sub_5d3470(arg1)
            
            if (var_c != 0)
                return 0xffffffff
            
            sub_5cce60("DirectSound: Unsupported audio format")
            return 0xffffffff
        
        uint32_t eax_7 = zx.d(esi)
        
        if (eax_7 == 0x8120)
        label_5d3828:
            var_c = 1
            arg1[1].w = esi
            *(arg1[0x28] + 8) = sub_5d34e0(nullptr, arg1)
            
            if (*(arg1[0x28] + 8) s> 0)
                i = 1
        
        if (eax_7 == 0x8020 || eax_7 == 8 || eax_7 == 0x8010)
            goto label_5d3828
        
        esi = sub_5c8ad0()
    while (i == 0)
    
    *(arg1[0x28] + 0xc) = arg1[3]
    return 0
}
