// 函数名称: sub_412000
// 虚拟地址: 0x412000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_412000()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edx = data_26a44e4
    data_27e7a6c = 0
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax = 0
    int32_t* edi
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x6c)
            edi = edx + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            edi = edx + 0x8c
            break
    
    edi[3] += 1
    
    if (*edi == 0)
        sub_4f4170(edi)
    
    int32_t* esi_3 = *edi
    *edi = *esi_3
    sub_5abfc0(esi_3, 0, 0x6c)
    
    if (esi_3 == 0)
        esi_3 = nullptr
    else
        esi_3[0x15] = 0
        esi_3[0x16] = 0
        esi_3[0x17] = 0
    
    long double x87_r7 = fconvert.t(0.52359879016876221)
    data_27e7a70 = esi_3
    int32_t mxcsr
    int16_t x87control
    sub_68b980(mxcsr, x87control, x87_r7)
    void* eax_2 = data_27e7fd0
    *esi_3 = fconvert.s(fconvert.t(fconvert.s(x87_r7)))
    esi_3[0xc].b = 0
    esi_3[2] = fconvert.s(fconvert.t(0.100000001f))
    esi_3[3] = fconvert.s(fconvert.t(1000f))
    esi_3[0xd] = fconvert.s(float.t(0))
    esi_3[1] = fconvert.s(float.t(*(eax_2 + 0x18)) / float.t(*(eax_2 + 0x14)))
    esi_3[0xe] = data_307b6b0
    esi_3[0xf] = data_307b6b4
    esi_3[0x10] = data_307b6b8
    esi_3[0x11] = 0
    esi_3[0x12] = 0
    esi_3[0x13] = 0
    esi_3[0x14] = 0x3f800000
    esi_3[0x19] = 0
    int32_t* ecx_4 = data_26a4500
    
    if (ecx_4 == 0)
        return 0
    
    return (*(*ecx_4 + 0x24))(0)
}
