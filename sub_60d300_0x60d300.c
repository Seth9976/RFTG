// 函数名称: sub_60d300
// 虚拟地址: 0x60d300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60d300(int32_t arg1)
{
    // 第一条实际指令: float var_10 = fconvert.s(float.t(0))
    float var_10 = fconvert.s(float.t(0))
    int32_t edx = *(arg1 + 0xdc)
    float var_c = fconvert.s(float.t(1))
    int32_t ecx = *(arg1 + 0xd8)
    int32_t var_20 = *(arg1 + 0xd4)
    void* edi = *(arg1 + 0x134)
    int32_t var_18 = edx
    int32_t var_1c = ecx
    int32_t var_14 = *(arg1 + 0xe0)
    int32_t* eax_2 = *(edi + 8)
    (*(*eax_2 + 0xbc))(eax_2, &var_20)
    int32_t eax_4 = *(arg1 + 0xdc)
    
    if (eax_4 != 0)
        int32_t esi_1 = *(arg1 + 0xe0)
        
        if (esi_1 != 0)
            float var_60 = fconvert.s(fconvert.t(2.0) / float.t(eax_4))
            long double x87_r7_4 = float.t(0)
            float var_5c_1 = fconvert.s(x87_r7_4)
            float var_58_1 = fconvert.s(x87_r7_4)
            float var_54_1 = fconvert.s(x87_r7_4)
            float var_50_1 = fconvert.s(x87_r7_4)
            float var_4c_1 = fconvert.s(fconvert.t(-2.0) / float.t(esi_1))
            float var_48_1 = fconvert.s(x87_r7_4)
            float var_44_1 = fconvert.s(x87_r7_4)
            float var_40_1 = fconvert.s(x87_r7_4)
            float var_3c_1 = fconvert.s(x87_r7_4)
            long double x87_r6_3 = float.t(1)
            float var_38_1 = fconvert.s(x87_r6_3)
            float var_34_1 = fconvert.s(x87_r7_4)
            float var_30_1 = fconvert.s(fconvert.t(-1f))
            float var_2c_1 = fconvert.s(x87_r6_3)
            float var_24_1 = fconvert.s(x87_r6_3)
            float var_28_1 = fconvert.s(x87_r7_4)
            int32_t* edi_1 = *(edi + 8)
            (*(*edi_1 + 0xb0))(edi_1, 3, &var_60)
    
    return 0
}
