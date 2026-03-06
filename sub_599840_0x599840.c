// 函数名称: sub_599840
// 虚拟地址: 0x599840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_599840(int32_t* arg1, char arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t eax = arg1[2]
    int32_t edi_1 = eax & 7
    
    if (edi_1 != 0)
        if (eax s< edi_1)
            sub_598fa0(arg1)
        
        arg1[3] u>>= edi_1.b
        arg1[2] -= edi_1
    
    int32_t i_1 = arg1[2]
    int32_t i = 0
    
    if (i_1 s<= 0)
    label_59988f:
        int32_t edi_2 = arg1[1]
        
        do
            char* ecx_2 = *arg1
            char ecx_3
            
            if (ecx_2 u< edi_2)
                arg2 = *ecx_2
                *arg1 = &ecx_2[1]
                ecx_3 = arg2
            else
                ecx_3 = 0
            
            *(&var_8 + i) = ecx_3
            i += 1
        while (i s< 4)
    else
        uint32_t ecx_1 = arg1[3]
        
        do
            i_1 -= 8
            *(&var_8 + i) = arg1[3].b
            ecx_1 u>>= 8
            i += 1
            arg1[3] = ecx_1
        while (i_1 s> 0)
        
        arg1[2] = i_1
        
        if (i s< 4)
            goto label_59988f
    
    int16_t eax_1 = var_8.w
    uint32_t ebx_4 = (zx.d(eax_1:1.b) << 8) + zx.d(eax_1.b)
    
    if ((zx.d(var_8:3.b) << 8) + zx.d(var_8:2.b) == (ebx_4 ^ 0xffff))
        if (*arg1 + ebx_4 u> arg1[1])
            data_273ac1c = "read past buffer"
            return 0
        
        int32_t eax_7
        
        if (arg1[4] + ebx_4 u> arg1[6])
            eax_7 = sub_598fe0(ebx_4, arg1)
        
        if (arg1[4] + ebx_4 u<= arg1[6] || eax_7 != 0)
            int128_t* edi_4 = *arg1
            sub_5ab990(arg1[4], edi_4, ebx_4)
            int32_t eax_10 = arg1[4] + ebx_4
            *arg1 = edi_4 + ebx_4
            arg1[4] = eax_10
            return 1
    else
        data_273ac1c = "zlib corrupt"
    
    return 0
}
