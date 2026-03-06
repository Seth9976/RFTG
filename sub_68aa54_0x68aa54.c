// 函数名称: sub_68aa54
// 虚拟地址: 0x68aa54
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_68aa54(int16_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_20 = edi
    uint32_t result
    int32_t* ecx
    int32_t edx
    
    if ((arg2[3].b & 0x40) != 0)
    label_68abac:
        int32_t temp0_1 = arg2[1]
        arg2[1] -= 2
        
        if (temp0_1 - 2 s< 0)
            uint32_t eax_28 = zx.d(arg1)
            result = sub_68ad1a(eax_28, edx, ecx, eax_28.w, arg2)
        else
            result = arg1.d
            **arg2 = result.w
            *arg2 += 2
    else
        int32_t eax_2
        eax_2, edx = __fileno(arg2)
        ecx = arg2
        int32_t eax_3
        
        if (eax_2 != 0xffffffff)
            eax_3, edx = __fileno(arg2)
            ecx = arg2
        
        void* eax_9
        
        if (eax_2 == 0xffffffff || eax_3 == 0xfffffffe)
            eax_9 = &data_8b8ea8
        else
            void* edi_1 = &(&data_3166ee0)[__fileno(arg2) s>> 5]
            int32_t eax_6
            eax_6, edx = __fileno(arg2)
            eax_9 = ((eax_6 & 0x1f) << 6) + *edi_1
            ecx = arg2
        
        eax_9.b = *(eax_9 + 0x24)
        eax_9.b &= 0x7f
        
        if (eax_9.b == 2)
            goto label_68abac
        
        int32_t eax_10
        eax_10, edx = __fileno(arg2)
        ecx = arg2
        int32_t eax_11
        
        if (eax_10 != 0xffffffff)
            eax_11, edx = __fileno(arg2)
            ecx = arg2
        
        void* eax_17
        
        if (eax_10 == 0xffffffff || eax_11 == 0xfffffffe)
            eax_17 = &data_8b8ea8
        else
            void* edi_2 = &(&data_3166ee0)[__fileno(arg2) s>> 5]
            int32_t eax_14
            eax_14, edx = __fileno(arg2)
            eax_17 = ((eax_14 & 0x1f) << 6) + *edi_2
            ecx = arg2
        
        eax_17.b = *(eax_17 + 0x24)
        eax_17.b &= 0x7f
        
        if (eax_17.b == 1)
            goto label_68abac
        
        int32_t eax_18
        eax_18, edx = __fileno(arg2)
        ecx = arg2
        int32_t eax_19
        
        if (eax_18 != 0xffffffff)
            eax_19, edx = __fileno(arg2)
            ecx = arg2
        
        void* eax_25
        
        if (eax_18 == 0xffffffff || eax_19 == 0xfffffffe)
            eax_25 = &data_8b8ea8
        else
            void* edi_3 = &(&data_3166ee0)[__fileno(arg2) s>> 5]
            int32_t eax_22
            eax_22, edx = __fileno(arg2)
            eax_25 = ((eax_22 & 0x1f) << 6) + *edi_3
            ecx = arg2
        
        if ((*(eax_25 + 4) & 0x80) == 0)
            goto label_68abac
        
        int32_t var_14
        char var_10[0x8]
        void* ecx_1
        result, ecx_1 = __mbsnbcpy_s(&var_14, &var_10, 5, arg1.d)
        
        if (result == 0)
            int32_t edi_4 = 0
            
            if (var_14 s> 0)
                do
                    int32_t temp1_1 = arg2[1]
                    arg2[1] -= 1
                    
                    if (temp1_1 - 1 s< 0)
                        int32_t* var_24_11 = arg2
                        result = sub_5ad3b0(sx.d(var_10[edi_4]))
                    else
                        ecx_1.b = var_10[edi_4]
                        **arg2 = ecx_1.b
                        char* ecx_2 = *arg2
                        result = zx.d(*ecx_2)
                        *arg2 = &ecx_2[1]
                    
                    if (result == 0xffffffff)
                        goto label_68ab68
                    
                    edi_4 += 1
                while (edi_4 s< var_14)
            
            result.w = arg1
        else
        label_68ab68:
            result = 0xffff
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
