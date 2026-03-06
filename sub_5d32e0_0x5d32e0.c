// 函数名称: sub_5d32e0
// 虚拟地址: 0x5d32e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d32e0(void* arg1)
{
    // 第一条实际指令: uint32_t var_8 = 0
    uint32_t var_8 = 0
    int32_t var_c = 0
    int32_t var_10 = 0
    *(*(arg1 + 0xa0) + 0x14) = 0
    int32_t* eax_1 = *(*(arg1 + 0xa0) + 4)
    int32_t eax_2 = (*(*eax_1 + 0x10))(eax_1, &var_c, &var_8)
    
    if (eax_2 == 0x88780096)
        int32_t* eax_4 = *(*(arg1 + 0xa0) + 4)
        (*(*eax_4 + 0x50))(eax_4)
        int32_t* eax_6 = *(*(arg1 + 0xa0) + 4)
        eax_2 = (*(*eax_6 + 0x10))(eax_6, &var_c, &var_8)
    
    if (eax_2 != 0)
        sub_5d2f30(eax_2)
        return 0
    
    void* ecx_3 = *(arg1 + 0xa0)
    uint32_t temp0 = divu.dp.d(0:var_8, *(ecx_3 + 0xc))
    var_8 = temp0
    *(ecx_3 + 0x10) = temp0
    void* ecx_4 = *(arg1 + 0xa0)
    uint32_t temp1 = modu.dp.d(0:(var_8 + 1), *(ecx_4 + 8))
    var_8 = temp1
    uint32_t eax_14 = *(ecx_4 + 0xc) * temp1
    var_8 = eax_14
    int32_t* edx_6 = *(ecx_4 + 4)
    int32_t eax_15 =
        (*(*edx_6 + 0x2c))(edx_6, eax_14, *(ecx_4 + 0xc), ecx_4 + 0x14, &var_10, 0, &var_c, 0)
    
    if (eax_15 == 0x88780096)
        int32_t* eax_17 = *(*(arg1 + 0xa0) + 4)
        (*(*eax_17 + 0x50))(eax_17)
        void* eax_18 = *(arg1 + 0xa0)
        int32_t* ecx_7 = *(eax_18 + 4)
        eax_15 = (*(*ecx_7 + 0x2c))(ecx_7, var_8, *(eax_18 + 0xc), eax_18 + 0x14, &var_10, 0, &var_c, 0)
    
    if (eax_15 == 0)
        return *(*(arg1 + 0xa0) + 0x14)
    
    sub_5d2f30(eax_15)
    return 0
}
