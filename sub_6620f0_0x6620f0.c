// 函数名称: sub_6620f0
// 虚拟地址: 0x6620f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6620f0(int32_t arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* i_1 = arg3
    int32_t var_10 = 0x474e5089
    int32_t var_c = 0xa1a0a0d
    
    if (i_1 u> 8)
        i_1 = 8
    label_662122:
        
        if (arg2 u<= 7)
            if (arg2 + i_1 u> 8)
                i_1 = 8 - arg2
            
            void* ecx_1 = &__saved_ebp + arg2 - 0xc
            int32_t* edx_2 = arg2 + arg1
            void* i = i_1
            
            if (i_1 u>= 4)
                do
                    if (*edx_2 != *ecx_1)
                        goto label_662168
                    
                    i -= 4
                    ecx_1 += 4
                    edx_2 = &edx_2[1]
                while (i u>= 4)
            
            if (i != 0)
            label_662168:
                uint32_t eax_3 = zx.d(*edx_2)
                uint32_t edi_1 = zx.d(*ecx_1)
                
                if (eax_3 != edi_1)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return (eax_3 - edi_1) s>> 0x1f | 1
                
                if (i u> 1)
                    uint32_t eax_5 = zx.d(*(edx_2 + 1))
                    uint32_t edi_2 = zx.d(*(ecx_1 + 1))
                    
                    if (eax_5 != edi_2)
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return (eax_5 - edi_2) s>> 0x1f | 1
                    
                    if (i u> 2)
                        uint32_t eax_6 = zx.d(*(edx_2 + 2))
                        uint32_t edi_3 = zx.d(*(ecx_1 + 2))
                        
                        if (eax_6 != edi_3)
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return (eax_6 - edi_3) s>> 0x1f | 1
                        
                        if (i u> 3)
                            uint32_t eax_4 = zx.d(*(edx_2 + 3)) - zx.d(*(ecx_1 + 3))
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return eax_4 s>> 0x1f | 1
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
    else if (i_1 u>= 1)
        goto label_662122
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0xffffffff
}
