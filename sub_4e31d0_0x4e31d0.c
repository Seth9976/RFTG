// 函数名称: sub_4e31d0
// 虚拟地址: 0x4e31d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e31d0(int32_t* arg1 @ esi, int32_t* arg2 @ edi, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_2 = (arg3 - arg1) s>> 2
    int32_t eax_2 = (arg3 - arg1) s>> 2
    int32_t eax_45
    
    if (eax_2 s<= 0x28)
        if (arg4(*arg2, *arg1) != 0)
            int32_t eax_49 = *arg2
            *arg2 = *arg1
            *arg1 = eax_49
        
        if (arg4(*arg3, *arg2) != 0)
            int32_t eax_52 = *arg3
            *arg3 = *arg2
            *arg2 = eax_52
        
        eax_45 = arg4(*arg2, *arg1)
        
        if (eax_45.b != 0)
            eax_45 = *arg2
            *arg2 = *arg1
            *arg1 = eax_45
    else
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(eax_2 + 1)
        int32_t eax_6 = (eax_4 + (edx_1 & 7)) s>> 3
        int32_t* ebx_1 = eax_6 << 2
        
        if (arg4(*(ebx_1 + arg1), *arg1) != 0)
            int32_t eax_9 = *(ebx_1 + arg1)
            *(ebx_1 + arg1) = *arg1
            *arg1 = eax_9
        
        if (arg4(arg1[eax_6 * 2], *(ebx_1 + arg1)) != 0)
            int32_t eax_12 = arg1[eax_6 * 2]
            arg1[eax_6 * 2] = *(ebx_1 + arg1)
            *(ebx_1 + arg1) = eax_12
        
        if (arg4(*(ebx_1 + arg1), *arg1) != 0)
            int32_t eax_15 = *(ebx_1 + arg1)
            *(ebx_1 + arg1) = *arg1
            *arg1 = eax_15
        
        int32_t* eax_17 = arg2 - ebx_1
        
        if (arg4(*arg2, *eax_17) != 0)
            int32_t eax_20 = *arg2
            *arg2 = *eax_17
            *eax_17 = eax_20
        
        if (arg4(*(ebx_1 + arg2), *arg2) != 0)
            int32_t eax_23 = *(ebx_1 + arg2)
            *(ebx_1 + arg2) = *arg2
            *arg2 = eax_23
        
        if (arg4(*arg2, *eax_17) != 0)
            int32_t eax_26 = *arg2
            *arg2 = *eax_17
            *eax_17 = eax_26
        
        int32_t* eax_28 = arg3 - (eax_6 << 3)
        void* ecx_11 = arg3 - ebx_1
        
        if (arg4(*ecx_11, *eax_28) != 0)
            int32_t ecx_13 = *ecx_11
            *ecx_11 = *eax_28
            *eax_28 = ecx_13
        
        void* eax_35
        
        if (arg4(*arg3, *ecx_11) == 0)
            eax_35 = ecx_11
        else
            int32_t* eax_34 = *arg3
            eax_35 = ecx_11
            *arg3 = *eax_35
            *eax_35 = eax_34
        
        if (arg4(*eax_35, *eax_28) != 0)
            int32_t eax_37 = *ecx_11
            *ecx_11 = *eax_28
            *eax_28 = eax_37
        
        if (arg4(*arg2, *(ebx_1 + arg1)) != 0)
            int32_t eax_40 = *arg2
            *arg2 = *(ebx_1 + arg1)
            *(ebx_1 + arg1) = eax_40
        
        if (arg4(*ecx_11, *arg2) != 0)
            int32_t eax_43 = *ecx_11
            *ecx_11 = *arg2
            *arg2 = eax_43
        
        eax_45 = arg4(*arg2, *(ebx_1 + arg1))
        
        if (eax_45.b != 0)
            int32_t eax_46 = *arg2
            *arg2 = *(ebx_1 + arg1)
            *(ebx_1 + arg1) = eax_46
            return eax_46
    
    return eax_45
}
