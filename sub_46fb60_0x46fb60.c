// 函数名称: sub_46fb60
// 虚拟地址: 0x46fb60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46fb60(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t* arg9)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* entry_ebx
    int32_t eax_4 = sub_4a1730(arg9, arg2, entry_ebx, arg4, 0, 0, arg6, arg5)
    void* edx_2 = arg2 * 0xb4 + entry_ebx
    int32_t result_2 = 0
    int32_t var_858 = 0
    char var_84e = 0
    int32_t var_87c = 0
    int32_t var_878 = 0
    char var_859 = 0
    char var_85a = 0
    int32_t eax_5 = arg4 * 5
    bool cond:0 = sx.d(*(entry_ebx + (eax_5 << 2) + 0x464)) != arg2
    void* edx_4 = *(entry_ebx + (eax_5 << 2) + 0x46c)
    bool cond:1 = (*(edx_4 + 0x10) & 1) u> 0
    int32_t edx_5 = sx.d(*(edx_4 + 0xe))
    int32_t edx_6 = sx.d(*(edx_4 + 7))
    int32_t eax_8 = *(edx_4 + 0x10)
    int32_t eax_9
    int32_t ecx_4
    int32_t edx_7
    eax_9, ecx_4, edx_7 = sub_4b1530(eax_8, edx_6, entry_ebx, arg2)
    void var_32c
    void* var_8a8_2 = &var_32c
    int32_t esi_1 = arg5 + eax_9
    int32_t var_8ac_1 = 3
    int32_t var_868 = esi_1
    int32_t result = sub_49dea0(arg2, edx_7, ecx_4, entry_ebx)
    int32_t result_1 = result
    int32_t result_3 = 0
    
    if (result s> 0)
        void var_84c
        void* esi_2 = &var_84c
        
        do
            int32_t var_328[0xc8]
            void* edi_1 = var_328[result_3 * 2]
            int32_t eax_11 = *(edi_1 + 8)
            
            if ((eax_11 & 0x8000) != 0)
                var_878 += sx.d(*(edi_1 + 0x10))
            
            if ((eax_11 & 0x100) == 0)
            label_46fd6b:
                
                if (cond:0 == 0 && edx_5 != 5 && (eax_11 & 0x40) != 0)
                    esi_2 += 4
                    var_859 = 1
                
                if (eax_11 == 0x120 && *(edi_1 + 0xc) == 0)
                    esi_2 += 4
                    var_858 += sx.d(*(edi_1 + 0x10))
                
                if (cond:0 != 0 || arg6 != 0 || cond:1 == 0 || (eax_11 & 0x4000) == 0)
                label_46fe46:
                    int32_t edx_11 = 0
                    
                    if ((eax_11 & 0x80) != 0)
                        edx_11 = sx.d(*(edi_1 + 0x10))
                        esi_2 += 4
                        result_2 += edx_11
                    
                    if (cond:1 != 0)
                        goto label_46fe9b
                    
                    edx_11 = 0
                    
                    if ((eax_11 & 0x20000) == 0)
                        goto label_46fe9b
                    
                    if (cond:0 == 0 || (eax_11 & 0x40000) == 0)
                        esi_2 += 4
                        var_85a = 1
                    label_46fe9b:
                        
                        if ((eax_11 & 0x20000000) != 0)
                            int32_t eax_16
                            eax_16, edx_11 = sub_49db70(&var_84c, edx_11, arg2, entry_ebx, &var_84c, 4)
                            
                            if (eax_16 s> 0)
                                esi_2 += 4
                                var_858 += sx.d(*(edi_1 + 0x10))
                        
                        int32_t eax_20 = *(edi_1 + 8) & 0x10000000
                        
                        if (eax_20 != 0
                                && sub_49db70(eax_20, edx_11, arg2, entry_ebx, &var_84c, 3) s> 0)
                            esi_2 += 4
                            var_858 += sx.d(*(edi_1 + 0x10))
                        
                        int32_t eax_24 = *(edi_1 + 8) & 0x40000000
                        
                        if (eax_24 != 0
                                && sub_49db70(eax_24, &var_84c, arg2, entry_ebx, &var_84c, 5) s> 0)
                            esi_2 += 4
                            var_858 += sx.d(*(edi_1 + 0x10))
                        
                        if ((*(edi_1 + 8) & 0x80000000) != 0 && *(edx_2 + 0xa3) s> 0)
                            esi_2 += 4
                            var_858 += sx.d(*(edi_1 + 0x10))
                else if ((eax_11 & 0x10) == 0)
                    if (edx_5 != 5)
                    label_46fdf3:
                        
                        if (((eax_11 & 0x200) == 0 || (eax_8.b & 0x40) != 0)
                                && ((eax_11 & 0x400) == 0 || (eax_8 & 0x800) != 0))
                            int32_t ecx_45 = sx.d(*(edi_1 + 0x10))
                            esi_2 += 4
                            var_84e = 1
                            
                            if (ecx_45 s> var_87c)
                                var_87c = ecx_45
                            
                            goto label_46fe46
                else if (edx_5 == 5)
                    goto label_46fdf3
            else if (((eax_11 & 2) == 0 || edx_5 != 2) && ((eax_11 & 4) == 0 || edx_5 != 3)
                    && ((eax_11 & 8) == 0 || edx_5 != 4) && ((eax_11 & 0x10) == 0 || edx_5 != 5))
                if ((eax_11 & 0x200) == 0
                        || (*(*(entry_ebx + (eax_5 << 2) + 0x46c) + 0x10) & 0x40) == 0)
                    goto label_46fd6b
                
                var_868 += sx.d(*(edi_1 + 0x10))
            else
                var_868 += sx.d(*(edi_1 + 0x10))
            
            result = result_3 + 1
            result_3 = result
        while (result s< result_1)
        
        esi_1 = var_868
    
    int32_t esi_3 = esi_1 + sx.d(*(edx_2 + 0x62))
    
    if (cond:1 == 0)
        if (var_85a != 0)
            result = result_2
        
        if (var_85a == 0 || edx_6 s> esi_3 + var_858 + result + 2)
            sub_46f9a0(entry_ebx, arg7, arg3)
            sub_46f910(entry_ebx, arg7, arg3)
            result = sub_46fad0(entry_ebx, arg7, arg3)
    else
        if (var_84e == 0)
            result = sub_46fa50(entry_ebx, arg7, arg3)
            *arg9 = *arg3
        
        if (cond:0 == 0)
            if (var_84e != 0)
                result = var_878 + var_87c + arg8
                
                if (result s< eax_4 && var_859 == 0)
                    result = sub_46f910(entry_ebx, arg7, arg3)
            
            if (var_858 == 0 && esi_3 + result_2 s< edx_6)
                result = sub_46fad0(entry_ebx, arg7, arg3)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
