// 函数名称: sub_4a0420
// 虚拟地址: 0x4a0420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4a0420(void* arg1 @ edi, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_330
    void* var_86c = &var_330
    int32_t var_870 = 2
    int32_t result = 0
    int32_t ecx
    int32_t edx
    int32_t var_858 = sub_49dea0(arg2, edx, ecx, arg1)
    int32_t eax_3
    eax_3.b = *(arg1 + 0x1ec0)
    
    if (eax_3.b == 3 || eax_3.b == 4)
        int32_t ecx_1 = sx.d(eax_3.b)
        
        if (eax_3.b s>= 0 && ((*(arg2 * 0xb4 + arg1 + 0x2c) & 0x7f) == ecx_1
                || (*(arg2 * 0xb4 + arg1 + 0x30) & 0x7f) == ecx_1))
            result = 1
    
    if (eax_3.b == 3 || eax_3.b == 4)
        int32_t eax_5 = sx.d(eax_3.b) | 0x80
        
        if (eax_5 s>= 0)
            bool cond:1_1
            
            if (eax_5.b s< 0)
                if (*(arg2 * 0xb4 + arg1 + 0x2c) != eax_5)
                    cond:1_1 = *(arg2 * 0xb4 + arg1 + 0x30) != eax_5
                    goto label_4a04d7
                
                result += 2
            else if ((*(arg2 * 0xb4 + arg1 + 0x2c) & 0x7f) == eax_5)
                result += 2
            else
                cond:1_1 = (*(arg2 * 0xb4 + arg1 + 0x30) & 0x7f) != eax_5
            label_4a04d7:
                
                if (not(cond:1_1))
                    result += 2
    
    if (var_858 s> 0)
        int32_t ebx_2 = 0
        
        do
            int32_t var_32c[0xc8]
            void* esi_3 = var_32c[ebx_2 * 2]
            int32_t ecx_5 = *(esi_3 + 8)
            int32_t var_85c_1 = *(esi_3 + 0xc)
            
            if ((ecx_5 & 2) != 0)
                result += sx.d(*(esi_3 + 0x10))
            
            int32_t edx_9 = 0
            
            if ((ecx_5 & 0x10) != 0)
                edx_9 = sx.d(*(esi_3 + 0x10))
                result += edx_9
            
            void var_850
            
            if ((ecx_5 & 0x200) != 0 && sub_49db70(&var_850, edx_9, arg2, arg1, &var_850, 3) != 0)
                result += sx.d(*(esi_3 + 0x10))
            
            ebx_2 += 1
        while (ebx_2 s< var_858)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
