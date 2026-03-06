// 函数名称: sub_60dac0
// 虚拟地址: 0x60dac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60dac0(void* arg1)
{
    // 第一条实际指令: void* edi = *(arg1 + 0x134)
    void* edi = *(arg1 + 0x134)
    void* __saved_ebx = arg1
    int32_t ecx
    
    if (sub_60d940(ecx) s< 0)
        return 0xffffffff
    
    uint32_t ebx_6 =
        ((zx.d(*(arg1 + 0x12f)) << 8 | zx.d(*(arg1 + 0x12c))) << 8 | zx.d(*(arg1 + 0x12d))) << 8
        | zx.d(*(arg1 + 0x12e))
    int32_t eax_3
    int32_t ecx_3
    
    if (*(arg1 + 0x128) == 0)
        eax_3 = *(edi + 0x10)
        ecx_3 = *(edi + 0x14)
    else
        void* ecx_2 = *(arg1 + 0x128)
        eax_3 = *(ecx_2 + 0xc)
        ecx_3 = *(ecx_2 + 0x10)
    
    int32_t edx_1
    int32_t ebx_7
    
    if (*(arg1 + 0xd4) != 0 || *(arg1 + 0xd8) != 0 || *(arg1 + 0xdc) != eax_3
            || *(arg1 + 0xe0) != ecx_3)
        int32_t var_14_1 = eax_3
        int32_t* eax_6 = *(edi + 8)
        float var_c_1 = fconvert.s(float.t(0))
        int32_t var_10_1 = ecx_3
        float var_8_1 = fconvert.s(float.t(1))
        int32_t var_1c = 0
        int32_t var_18_1 = 0
        (*(*eax_6 + 0xbc))(eax_6, &var_1c)
        int32_t* eax_7 = *(edi + 8)
        void* ecx_5 = *eax_7
        void* var_30_3 = ecx_5
        int32_t eax_8 = (*(ecx_5 + 0xac))(eax_7, 0, 0, 1, ebx_6, fconvert.s(float.t(0)), 0)
        int32_t edx_5 = *(arg1 + 0xdc)
        float var_c_2 = fconvert.s(float.t(0))
        int32_t ecx_6 = *(arg1 + 0xd8)
        int32_t* edi_2 = *(edi + 8)
        float var_8_2 = fconvert.s(float.t(1))
        ebx_7 = eax_8
        var_1c = *(arg1 + 0xd4)
        int32_t var_14_2 = edx_5
        int32_t var_18_2 = ecx_6
        int32_t var_10_2 = *(arg1 + 0xe0)
        edx_1 = (*(*edi_2 + 0xbc))(edi_2, &var_1c)
    else
        int32_t* edi_1 = *(edi + 8)
        int32_t var_30 = ecx_3
        int32_t eax_5
        eax_5, edx_1 = (*(*edi_1 + 0xac))(edi_1, 0, 0, 1, ebx_6, fconvert.s(float.t(0)), 0)
        ebx_7 = eax_5
    
    if (ebx_7 s>= 0)
        return 0
    
    char const* const var_2c_3 = "Clear()"
    sub_60c740(ebx_7, edx_1)
    return 0xffffffff
}
