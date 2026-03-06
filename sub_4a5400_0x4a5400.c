// 函数名称: sub_4a5400
// 虚拟地址: 0x4a5400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a5400(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = arg5
    int32_t esi = 0
    int32_t eax_4 = &arg4[arg3 * 0x2d + 8]
    void* var_424 = nullptr
    void* var_414 = nullptr
    int32_t var_420 = 0
    int32_t* var_41c = eax_4
    
    if (ebx == 0xffffffff)
        int32_t eax_5 = sx.d(*(arg4 + 0x1e6a))
        eax_4 = eax_5 - 1
        
        if (eax_5 - 1 s< 0)
        label_4a546f:
            ebx = 0xffffffff
        else
            while (sx.d(*(arg4 + eax_4 + 0x1e84)) != arg3)
                int32_t temp1_1 = eax_4
                eax_4 -= 1
                
                if (temp1_1 - 1 s< 0)
                    goto label_4a546f
            
            ebx = sx.d(*(arg4 + (eax_4 << 1) + 0x1e6c))
            
            if (ebx != 0xffffffff)
                var_420 = 1
    
    if (arg2 != 0xffffffff)
        void* ecx_2 = arg4[arg2 * 5 + 0x11b]
        var_424 = &arg4[arg2 * 5 + 0x119]
        eax_4 = sx.d(*(ecx_2 + 0x15))
        int32_t var_428_1 = eax_4
        
        if (eax_4 s> 0)
            void* ecx_3 = ecx_2 + 0x18
            
            do
                var_414 = ecx_3
                
                if (*ecx_3 == 3)
                    eax_4 = *(ecx_3 + 8) & 0xf000000
                    
                    if (eax_4 != 0)
                        break
                    
                    eax_4 = var_428_1
                
                esi += 1
                ecx_3 += 0x18
            while (esi s< eax_4)
    
    char var_40c[0x404]
    
    if (ebx != 0xffffffff)
        if (var_414 == 0 || (*(var_414 + 8) & 0x8000000) == 0)
            eax_4 = sub_4a3710(esi, ebx, arg6, arg7)
        else
            eax_4 = &arg4[ebx * 5]
            *(eax_4 + 0x468) &= 0xffbf
            
            if (arg4[6].b == 0)
                int32_t var_438_1 = **(eax_4 + 0x46c)
                int32_t var_43c_1 = *var_41c
                sub_5a733b(&var_40c, "%s places %s at zero cost.\n")
                eax_4 = sub_4c5680(&var_40c)
    
    if (*(arg4 + 0x1ec3) == 0)
        if (ebx == 0xffffffff || var_420 != 0)
        label_4a55ab:
            
            if (var_414 != 0)
                int32_t ecx_9 = 0
                
                if ((*(var_414 + 8) & 0x20) != 0)
                    int32_t var_438_3 = 1
                    sub_49cc30(arg4, arg2, 0, 0xffffffff)
                    
                    if (arg4[6].b == 0)
                        sub_49bbd0(arg3)
                        int32_t var_438_5 = **(var_424 + 8)
                        int32_t var_43c_4 = *var_41c
                        sub_5a733b(&var_40c, "%s discards %s.\n")
                        char (* var_438_6)[0x404] = &var_40c
                        ecx_9 = sub_4591b0(sub_4c5680(&var_40c), &var_40c, arg4, arg3)
                    
                    sub_4ae7d0(ecx_9, arg3, 0xe, arg4)
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 1
        
        sub_4a4f00(eax_4, arg3, arg4, ebx, 0)
        
        if (*(arg4 + 0x1ec3) == 0)
            goto label_4a55ab
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
