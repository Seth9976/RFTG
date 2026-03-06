// 函数名称: sub_568a70
// 虚拟地址: 0x568a70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_568a70(int32_t* arg1, int32_t* arg2 @ esi, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_2 = (arg3 - arg1) s>> 2
    int32_t eax_2 = (arg3 - arg1) s>> 2
    int32_t eax_32
    
    if (eax_2 s<= 0x28)
        if (arg4(arg2, arg1) != 0)
            int32_t eax_35 = *arg2
            *arg2 = *arg1
            *arg1 = eax_35
        
        if (arg4(arg3, arg2) != 0)
            int32_t eax_37 = *arg3
            *arg3 = *arg2
            *arg2 = eax_37
        
        eax_32 = arg4(arg2, arg1)
        
        if (eax_32.b != 0)
            eax_32 = *arg2
            *arg2 = *arg1
            *arg1 = eax_32
    else
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(eax_2 + 1)
        int32_t eax_6 = (eax_4 + (edx_1 & 7)) s>> 3
        int32_t eax_8 = eax_6 * 4
        int32_t* ebx_1 = &arg1[eax_6]
        int32_t* ecx_2 = &arg1[eax_6 * 2]
        
        if (arg4(ebx_1, arg1) != 0)
            int32_t eax_10 = *ebx_1
            *ebx_1 = *arg1
            *arg1 = eax_10
        
        if (arg4(ecx_2, ebx_1) != 0)
            int32_t eax_12 = *ecx_2
            *ecx_2 = *ebx_1
            *ebx_1 = eax_12
        
        if (arg4(ebx_1, arg1) != 0)
            int32_t eax_14 = *ebx_1
            *ebx_1 = *arg1
            *arg1 = eax_14
        
        int32_t* edi_2 = arg2 - eax_8
        int32_t* ebx_2 = &arg2[eax_6]
        
        if (arg4(arg2, edi_2) != 0)
            int32_t eax_17 = *arg2
            *arg2 = *edi_2
            *edi_2 = eax_17
        
        if (arg4(ebx_2, arg2) != 0)
            int32_t eax_19 = *ebx_2
            *ebx_2 = *arg2
            *arg2 = eax_19
        
        if (arg4(arg2, edi_2) != 0)
            int32_t eax_21 = *arg2
            *arg2 = *edi_2
            *edi_2 = eax_21
        
        int32_t* ebx_4 = arg3 - (eax_6 << 3)
        int32_t* edi_4 = arg3 - eax_8
        
        if (arg4(edi_4, ebx_4) != 0)
            int32_t eax_23 = *edi_4
            *edi_4 = *ebx_4
            *ebx_4 = eax_23
        
        if (arg4(arg3, edi_4) != 0)
            int32_t eax_25 = *arg3
            *arg3 = *edi_4
            *edi_4 = eax_25
        
        if (arg4(edi_4, ebx_4) != 0)
            int32_t eax_27 = *edi_4
            *edi_4 = *ebx_4
            *ebx_4 = eax_27
        
        if (arg4(arg2, ebx_1) != 0)
            int32_t eax_29 = *arg2
            *arg2 = *ebx_1
            *ebx_1 = eax_29
        
        if (arg4(edi_4, arg2) != 0)
            int32_t eax_31 = *edi_4
            *edi_4 = *arg2
            *arg2 = eax_31
        
        eax_32 = arg4(arg2, ebx_1)
        
        if (eax_32.b != 0)
            int32_t eax_33 = *arg2
            *arg2 = *ebx_1
            *ebx_1 = eax_33
            return eax_33
    
    return eax_32
}
