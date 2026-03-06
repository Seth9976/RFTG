// 函数名称: sub_4dbfd0
// 虚拟地址: 0x4dbfd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4dbfd0(void* arg1)
{
    // 第一条实际指令: void* edi = *(arg1 + 4)
    void* edi = *(arg1 + 4)
    int32_t eax_1
    int32_t ecx
    eax_1, ecx = sub_54c2d0(*(arg1 + 0x48))
    int32_t* eax_2 = sub_54c4b0(ecx, eax_1)
    
    if (eax_2[0x3e0].b == 0)
        char** eax_3 = *eax_2
        sub_5349c0(eax_3, eax_1, &eax_2[1], eax_3)
        eax_2[0x3e0].b = 1
    
    int32_t eax_5 = *(sub_54c910(eax_2[1]) + 0x28)
    int32_t esi_3 = *(edi + 0xc)
    int32_t ebx = *(edi + 0x18)
    int32_t var_c = *(edi + 8)
    int32_t var_8 = 0
    int32_t ecx_5
    
    if (eax_5 != 1)
        if ((*(*data_3078804 + 0x28))(*(edi + 0x24)) == 0)
            *(edi + 0x24) = (*(*data_3078804 + 0x24))(*(edi + 0x14), *(edi + 0x10), *(edi + 8), 0)
        
        if (*(edi + 0x1c) s> 0 && (*(*data_3078804 + 0x34))(*(edi + 0x28)) == 0)
            int32_t eax_18 = *(edi + 0x1c)
            arg1:3.b = eax_18 == *(edi + 0x18) * 2
            int32_t ecx_11
            ecx_11.b = arg1:3.b == 0
            data_3078804
            *(edi + 0x28) =
                (*(*data_3078804 + 0x30))(*(edi + 0x20), eax_18, zx.d(ecx_11.b), 0, *(edi + 0x24))
        
        ecx_5 = *(edi + 0x28)
        arg1 = *(edi + 0x24)
        
        if (eax_5 == 2)
            var_8 = data_3078594
    else
        int32_t eax_6
        int32_t ecx_3
        eax_6, ecx_3 = sub_54c2d0(*(arg1 + 0x48))
        int32_t* eax_7 = sub_54c4b0(ecx_3, eax_6)
        
        if (eax_7[0x3e0].b == 0)
            char** edx_2 = *eax_7
            sub_5349c0(eax_7, edx_2, &eax_7[1], edx_2)
            eax_7[0x3e0].b = 1
        
        *(arg1 + 4)
        sub_4dbd80(eax_7[1])
        ecx_5 = *(edi + 0x30)
        arg1 = *(edi + 0x2c)
        int32_t eax_10 = data_3078594
        esi_3 = *(edi + 0xc) * eax_10
        ebx = *(edi + 0x18) * eax_10
        var_c = 0xc
    
    int32_t edx_14
    int32_t eax_23
    int32_t eax_22
    
    if (ecx_5 == 0)
        edx_14:eax_23 = muls.dp.d(0x55555556, esi_3)
    else
        edx_14:eax_22 = muls.dp.d(0x55555556, ebx)
    (*(*data_3078804 + 0x3c))(4, arg1, ecx_5, var_c, (edx_14 u>> 0x1f) + edx_14, esi_3, 0, var_8)
    int32_t ecx_16 = data_3078594
    void* result = data_27e7fe4
    
    if (ecx_16 s<= 0)
        *(result + 0x14) += 1
        *(result + 0x18) += 1
        return result
    
    *(result + 0x14) += ecx_16
    *(result + 0x18) += 1
    return result
}
