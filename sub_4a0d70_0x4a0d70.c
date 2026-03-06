// 函数名称: sub_4a0d70
// 虚拟地址: 0x4a0d70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a0d70(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edx = arg2 * 0xb4 + arg3 + 0x20
    void* ecx_2 = nullptr
    void* var_34c = edx
    void* var_338 = nullptr
    
    if (arg4 s>= 0)
        ecx_2 = arg3 + arg4 * 0x14 + 0x464
        var_338 = ecx_2
    
    int32_t var_33c = 0xffffffff
    
    if (ecx_2 != 0)
        edx = *(ecx_2 + 8)
        var_33c = sx.d(*(edx + 0xe))
    
    void var_330
    void* var_364 = &var_330
    int32_t var_368 = 3
    int32_t eax_6
    int32_t edx_1
    eax_6, edx_1 = sub_49dea0(arg2, edx, ecx_2, arg3)
    int32_t var_334 = sub_4b1530(eax_6, edx_1, arg3, arg2)
    int32_t var_340 = 0
    
    if (eax_6 s> 0)
        int32_t eax_31
        
        do
            int32_t var_32c[0xc8]
            void* edi_1 = var_32c[var_340 * 2]
            int32_t ecx_4 = *(edi_1 + 8)
            
            if ((ecx_4 & 0x100) == 0)
            label_4a0eca:
                
                if (arg6 != 0 && (*(edi_1 + 0xc) & 0x80) != 0)
                    int32_t eax_26 = sub_49c940(arg2, 0x41, arg3)
                    var_334 = sub_49c940(arg2, 1, arg3) + var_334 + eax_26
            else if (((ecx_4 & 2) == 0 || var_33c != 2) && ((ecx_4 & 4) == 0 || var_33c != 3)
                    && ((ecx_4 & 8) == 0 || var_33c != 4) && ((ecx_4 & 0x10) == 0 || var_33c != 5))
                if ((ecx_4 & 0x200) == 0 || var_338 == 0 || (*(*(var_338 + 8) + 0x10) & 0x40) == 0)
                    goto label_4a0eca
                
                var_334 += sx.d(*(edi_1 + 0x10))
            else
                var_334 += sx.d(*(edi_1 + 0x10))
            
            eax_31 = var_340 + 1
            var_340 = eax_31
        while (eax_31 s< eax_6)
    
    if (arg5 s>= 0)
        var_338 = arg3 + arg5 * 0x14 + 0x464
        void* eax_35 = *(arg3 + arg5 * 0x14 + 0x46c)
        int32_t i_2 = sx.d(*(eax_35 + 0x15))
        
        if (i_2 s> 0)
            void* edi_3 = eax_35 + 0x28
            int32_t i_1 = i_2
            int32_t i
            
            do
                if (*(edi_3 - 0x10) == 3 && (*(edi_3 - 4) & 8) != 0)
                    var_334 += sub_49c940(arg2, 0x41, arg3) * sx.d(*edi_3)
                
                edi_3 += 0x18
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    if (arg6 != 0)
        var_334 += sx.d(*(*(var_338 + 8) + 7))
    
    int32_t result = sx.d(*(var_34c + 0x42)) + var_334
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
