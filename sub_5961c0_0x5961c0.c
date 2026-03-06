// 函数名称: sub_5961c0
// 虚拟地址: 0x5961c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5961c0(int128_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    
    for (int32_t i = 0; i s< 0x10; i += 1)
        int32_t esi_1 = *(arg2 + (i << 2))
        
        if (esi_1 s> 0)
            sub_5abfc0(edi + arg1 + 0x500, i.b + 1, esi_1)
            edi += esi_1
    
    *(edi + arg1 + 0x500) = 0
    int32_t eax_3 = 0
    int32_t esi_2 = 0
    char* edx_2 = &arg1[0x50]
    void* ecx_5 = arg1 + 0x608
    int32_t i_1 = 1
    int32_t var_8 = 0xf
    void* var_c = ecx_5
    int32_t temp0_1
    
    do
        *(ecx_5 + 0x48) = esi_2 - eax_3
        
        if (zx.d(*edx_2) == i_1)
            int16_t* ecx_8 = arg1 + (esi_2 << 1) + 0x200
            
            do
                esi_2 += 1
                *ecx_8 = eax_3.w
                edx_2 = &arg1[0x50] + esi_2
                ecx_8 = &ecx_8[1]
                eax_3 += 1
            while (zx.d(*(&arg1[0x50] + esi_2)) == i_1)
            
            if (eax_3 - 1 s>= 1 << i_1.b)
                data_273ac1c = "bad code lengths"
                return 0
        
        int32_t ebx_5 = eax_3 << var_8.b
        ecx_5 = var_c + 4
        eax_3 *= 2
        *(ecx_5 - 4) = ebx_5
        i_1 += 1
        temp0_1 = var_8
        var_8 -= 1
        var_c = ecx_5
    while (temp0_1 - 1 s>= 0)
    *(arg1 + (i_1 << 2) + 0x604) = 0xffffffff
    sub_5abfc0(arg1, 0xff, 0x200)
    int32_t edi_1 = 0
    
    if (esi_2 s> 0)
        void* ebx_7 = &arg1[0x20]
        
        do
            uint32_t eax_5 = zx.d(*(arg1 + edi_1 + 0x500))
            
            if (eax_5 s<= 9)
                int32_t eax_6 = 1 << (9 - eax_5.b)
                
                if (eax_6 s> 0)
                    sub_5abfc0((zx.d(*ebx_7) << (9 - eax_5.b)) + arg1, edi_1.b, eax_6)
            
            edi_1 += 1
            ebx_7 += 2
        while (edi_1 s< esi_2)
    
    return 1
}
