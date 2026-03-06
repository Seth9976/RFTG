// 函数名称: sub_49fc70
// 虚拟地址: 0x49fc70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_49fc70(int32_t* arg1 @ esi, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edx = __chkstk(0x1698)
    int32_t edx = __chkstk(0x1698)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    void var_72c
    void* var_10 = &var_72c
    void* ecx_2 = arg2 * 0xb4 + arg1
    int32_t var_14 = 2
    int32_t ebx = 0
    int32_t var_1690 = 0
    int32_t var_1694 = 0
    int32_t eax_3 = sub_49dea0(arg2, edx, ecx_2, arg1)
    var_1690 = eax_3
    int32_t var_116c[0x148]
    
    if (eax_3 s> 0)
        int32_t edi_1 = 0
        
        do
            void var_728
            void* ecx_3 = *(&var_728 + (edi_1 << 3))
            
            if ((*(ecx_3 + 8) & 0x10) != 0)
                var_116c[ebx] = sx.d(*(&var_72c + (edi_1 << 3)))
                ebx += 1
                var_1694 = ebx
            
            int32_t eax_10 = *(ecx_3 + 8) & 0x200
            void var_168c
            
            if (eax_10 != 0 && sub_49db70(eax_10, 0, arg2, arg1, &var_168c, 3) != 0)
                var_116c[ebx] = sx.d(*(&var_72c + (edi_1 << 3)))
                ebx += 1
                var_1694 = ebx
            
            edi_1 += 1
        while (edi_1 s< var_1690)
    
    int32_t i = sx.d(*(ecx_2 + 0x44))
    int32_t edx_2 = 0
    int32_t var_c4c[0x148]
    
    while (i != 0xffffffff)
        var_c4c[edx_2] = i
        i = sx.d(arg1[i * 5 + 0x11d].w)
        edx_2 += 1
    
    int32_t ebx_2 = sx.d(*(ecx_2 + 0xae)) - sx.d(*(ecx_2 + 0xb0))
    var_1690 = edx_2
    
    if (ebx_2 s> 0)
        void* edi_2 = &(&__saved_ebp)[edx_2 - 0x312]
        edx_2 += ebx_2
        __builtin_memset(edi_2, 0xffffffff, ebx_2 << 2)
        var_1690 = edx_2
    
    int16_t eax_14 = *(ecx_2 + 0xb0)
    
    if (eax_14 s> *(ecx_2 + 0xae))
        var_1690 = edx_2 + ebx_2
    
    int32_t entry_ebx
    
    if (arg3 != 0 || var_1694 != 0)
        int32_t eax_19 = sx.d(*(ecx_2 + 0x60))
        sub_49d720(arg1, arg2)
        int32_t* var_18_3
        int32_t* var_14_3
        int32_t* var_10_3
        int32_t* eax_20
        
        if (*(ecx_2 + 0xc8) s>= *(ecx_2 + 0xc4))
            eax_14 = (*(*(ecx_2 + 0x28) + 0xc))(arg1, arg2, 6, &var_c4c, &var_1690, &var_116c, 
                &var_1694, eax_19, 0, 0, 0)
            
            if (*(arg1 + 0x1ec3) == 0)
                int32_t eax_22 = *(*(ecx_2 + 0x28) + 0x10)
                
                if (eax_22 != 0)
                    eax_22(arg1, arg2, 6)
                
                eax_20 = &var_1694
                var_10_3 = &var_1694
                var_14_3 = &var_1690
                var_18_3 = &var_c4c
                goto label_49feeb
        else
            var_10_3 = &var_1694
            eax_20 = &var_1690
            var_14_3 = &var_1690
            var_18_3 = &var_c4c
        label_49feeb:
            eax_14 = sub_49d860(eax_20, &var_116c, arg1, arg2, 6, var_18_3, var_14_3, var_10_3)
            
            if (*(arg1 + 0x1ec3) == 0)
                int32_t eax_23 = var_1694
                int32_t var_10_6 = eax_23
                eax_14 =
                    sub_49f3d0(eax_23, &var_116c, sx.d(*(ecx_2 + 0x60)), arg1, arg2, &var_c4c, var_1690)
    else if (arg1[6].b == 0)
        int32_t var_10_2 = *arg1[sx.d(*(ecx_2 + 0x60)) * 5 + 0x11b]
        int32_t var_14_2 = *(ecx_2 + 0x20)
        char var_40c[0x3d4]
        sub_5a733b(&var_40c, "%s pays 0 for %s.\n")
        int32_t eax_18 = sub_4c5680(&var_40c)
        sub_5a6aba(entry_ebx ^ &__saved_ebp)
        return eax_18
    
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
    return eax_14
}
