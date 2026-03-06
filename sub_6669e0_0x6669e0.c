// 函数名称: sub_6669e0
// 虚拟地址: 0x6669e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void**sub_6669e0(void* arg1, uint32_t arg2, int32_t arg3, void* arg4, void** arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edi = arg4
    
    if (edi u> arg3)
        sub_664100(arg1, "invalid chunklength")
        edi = nullptr
    else if (arg2 != 0)
        void var_108
        sub_663f40(&var_108, 1, 1, arg2)
        sub_664180(arg1, &var_108, "Unknown compression type @1")
    else
        void* eax_4 = arg3 - edi
        uint32_t var_128_1 = arg2
        uint32_t var_12c_2 = arg2
        int32_t edx
        void* eax_7 = sub_6668b0(*(arg1 + 0x2a8) + edi, arg1, edx, arg2, eax_4)
        int32_t eax_8
        
        if (edi u< 0xfffffffe && eax_7 u< 0xfffffffe - edi)
            eax_8 = *(arg1 + 0x28c)
        
        if (edi u>= 0xfffffffe || eax_7 u>= 0xfffffffe - edi
                || (eax_8 != 0 && edi + eax_7 u>= eax_8 - 1))
            sub_664100(arg1, "Exceeded size limit while expanding chunk")
        else if (eax_7 != 0)
            void* eax_10 = edi + eax_7
            int128_t* eax_12 = sub_666560(arg1, eax_10 + 1)
            
            if (eax_12 == 0)
                sub_664100(arg1, "Not enough memory to decompress chunk")
            else
                int32_t ecx_4 = sub_5ab990(eax_12, *(arg1 + 0x2a8), edi)
                void* var_134_1 = eax_7
                int32_t var_138_1 = edi + eax_12
                void* eax_17 = sub_6668b0(*(arg1 + 0x2a8) + edi, arg1, eax_12, ecx_4, eax_4)
                *(eax_12 + edi + eax_7) = 0
                
                if (eax_17 == eax_7)
                    sub_666530(arg1, *(arg1 + 0x2a8))
                    *(arg1 + 0x2a8) = eax_12
                    *arg5 = eax_10
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return eax_12
                
                sub_664100(arg1, "png_inflate logic error")
                sub_666530(arg1, eax_12)
    
    int128_t* eax_21 = sub_666560(arg1, edi + 1)
    
    if (eax_21 != 0)
        if (edi != 0)
            sub_5ab990(eax_21, *(arg1 + 0x2a8), edi)
        
        sub_666530(arg1, *(arg1 + 0x2a8))
        *(arg1 + 0x2a8) = eax_21
        *(edi + eax_21) = 0
    
    *arg5 = edi
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg5
}
