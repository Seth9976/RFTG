// 函数名称: sub_5d8450
// 虚拟地址: 0x5d8450
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d8450(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1[0xd]
    int32_t* ebx = arg1[0xd]
    
    if ((*arg1 & 2) != 0)
        sub_6073a0(arg1, 1)
    
    int32_t* edx = sub_5d8400(ebx)
    ebx[1] = 0
    int32_t* ecx = arg1[1]
    int32_t* edi_1 = *(arg2 + 4)
    int32_t eax_1 = *ecx
    
    if (eax_1 != 0)
        edx = eax_1 & 0xf0000000
    
    int32_t eax_3
    
    if (eax_1 == 0 || edx == 0x10000000)
        eax_3 = eax_1 u>> 0x18 & 0xf
    
    if ((eax_1 == 0 || edx == 0x10000000) && (eax_3 == 1 || eax_3 == 2 || eax_3 == 3))
        int32_t eax_9 = *edi_1
        
        if (eax_9 != 0)
            edx = eax_9 & 0xf0000000
        
        int32_t eax_11
        
        if (eax_9 == 0 || edx == 0x10000000)
            eax_11 = eax_9 u>> 0x18 & 0xf
        
        if ((eax_9 == 0 || edx == 0x10000000) && (eax_11 == 1 || eax_11 == 2 || eax_11 == 3))
            int32_t var_1c_3 = edi_1[1]
            int32_t eax_19 = sub_5d8070(&ebx[1], ecx[1], edx)
            bool cond:1_1 = ebx[1] != 0
            ebx[0x10] = eax_19
            
            if (not(cond:1_1) && eax_19 == 0)
                return 0xffffffff
            
            int32_t* eax_20 = edi_1
            edi_1 = eax_20
            
            if (ecx[2].b != eax_20[2].b)
                ebx[1] = 0
        else
            void* eax_13 = arg1[0xd]
            uint32_t var_1c_2 = zx.d(*(eax_13 + 0x4f))
            char ecx_2 = *(eax_13 + 0x4d)
            uint32_t var_20_2 = zx.d(*(eax_13 + 0x4e))
            char edx_5 = *(eax_13 + 0x4c)
            int32_t eax_15 = sub_5d8120(ecx, edi_1, edx_5, ecx_2, edx_5, ecx_2)
            ebx[0x10] = eax_15
            
            if (eax_15 == 0)
                return 0xffffffff
    else
        int32_t eax_4 = *edi_1
        
        if (eax_4 != 0)
            edx = eax_4 & 0xf0000000
        
        int32_t eax_6
        
        if (eax_4 == 0 || edx == 0x10000000)
            eax_6 = eax_4 u>> 0x18 & 0xf
        
        if ((eax_4 == 0 || edx == 0x10000000) && (eax_6 == 1 || eax_6 == 2 || eax_6 == 3))
            int32_t* var_1c_1 = &ebx[1]
            int32_t eax_8 = sub_5d8380(edi_1, edx)
            bool cond:2_1 = ebx[1] != 0
            ebx[0x10] = eax_8
            
            if (not(cond:2_1) && eax_8 == 0)
                return 0xffffffff
            
            ebx[1] = 0
        else if (ecx == edi_1)
            ebx[1] = 1
    
    *ebx = arg2
    *(arg2 + 0x38) += 1
    void* edi_3 = edi_1[1]
    int32_t ecx_4 = 0
    
    if (edi_3 == 0)
        ebx[0x14] = 0
    else
        ebx[0x14] = *(edi_3 + 8)
    
    void* eax_23 = ecx[1]
    
    if (eax_23 != 0)
        ecx_4 = *(eax_23 + 8)
    
    ebx[0x15] = ecx_4
    int32_t result
    int80_t st0
    st0, result = sub_6077a0(arg1)
    return result
}
