// 函数名称: sub_49f150
// 虚拟地址: 0x49f150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49f150(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* entry_ebx
    void* ecx = *(entry_ebx + arg4 * 0x14 + 0x46c)
    int32_t edx = sx.d(*(ecx + 7))
    void var_330
    void* var_354 = &var_330
    int32_t var_358 = 2
    int32_t var_334 = 0
    int32_t eax_5 = sub_49dea0(arg3, edx, ecx, entry_ebx)
    int32_t ecx_1 = sx.d(*(entry_ebx + 0x1ec0))
    
    if (ecx_1 s>= 0)
        bool cond:0_1
        
        if (ecx_1.b s< 0)
            if (*(arg3 * 0xb4 + entry_ebx + 0x2c) != ecx_1)
                cond:0_1 = *(arg3 * 0xb4 + entry_ebx + 0x30) != ecx_1
                goto label_49f1d1
            
            var_334 = 1
        else if ((*(arg3 * 0xb4 + entry_ebx + 0x2c) & 0x7f) == ecx_1)
            var_334 = 1
        else
            cond:0_1 = (*(arg3 * 0xb4 + entry_ebx + 0x30) & 0x7f) != ecx_1
        label_49f1d1:
            
            if (not(cond:0_1))
                var_334 = 1
    
    int32_t ecx_2 = ecx_1 | 0x80
    
    if (ecx_2 s>= 0)
        bool cond:1_1
        
        if (ecx_2.b s< 0)
            if (*(arg3 * 0xb4 + entry_ebx + 0x2c) != ecx_2)
                cond:1_1 = *(arg3 * 0xb4 + entry_ebx + 0x30) != ecx_2
                goto label_49f205
            
            var_334 += 2
        else if ((*(arg3 * 0xb4 + entry_ebx + 0x2c) & 0x7f) == ecx_2)
            var_334 += 2
        else
            cond:1_1 = (*(arg3 * 0xb4 + entry_ebx + 0x30) & 0x7f) != ecx_2
        label_49f205:
            
            if (not(cond:1_1))
                var_334 += 2
    
    int32_t esi_8 = 0
    
    if (eax_5 s> 0)
        do
            int32_t var_32c[0xc8]
            void* edx_4 = var_32c[esi_8 * 2]
            
            if ((*(edx_4 + 8) & 2) != 0)
                var_334 += sx.d(*(edx_4 + 0x10))
            
            esi_8 += 1
        while (esi_8 s< eax_5)
    
    int32_t edx_5 = 0
    int32_t var_338 = 0
    
    if (arg6 s> 0)
        do
            void* eax_9 = *(entry_ebx + *(arg5 + (edx_5 << 2)) * 0x14 + 0x46c)
            int32_t i_2 = sx.d(*(eax_9 + 0x15))
            
            if (i_2 s> 0)
                void* edx_6 = eax_9 + 0x28
                int32_t i_1 = i_2
                int32_t i
                
                do
                    if (*(edx_6 - 0x10) == 2)
                        int32_t ecx_8 = *(edx_6 - 8)
                        int32_t var_344_1 = *(edx_6 - 4)
                        
                        if ((ecx_8 & 0x10) != 0)
                            var_334 += sx.d(*edx_6)
                        
                        if ((ecx_8 & 0x200) != 0)
                            var_334 += sx.d(*edx_6)
                    
                    edx_6 += 0x18
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                edx_5 = var_338
            
            edx_5 += 1
            var_338 = edx_5
        while (edx_5 s< arg6)
    
    int32_t result = edx - var_334
    
    if (edx - var_334 s< 0)
        result = 0
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
