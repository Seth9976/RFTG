// 函数名称: sub_4ac260
// 虚拟地址: 0x4ac260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4ac260(int32_t arg1, int32_t* arg2, char* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edi = nullptr
    int32_t result_1 = 0
    int32_t var_530 = 0
    
    if (arg4 s>= 0)
        edi = arg2[arg4 * 5 + 0x11b] + ((arg5 * 3 + 3) << 3)
        
        if (edi != 0)
            int32_t ecx_4 = *(edi + 8)
            int32_t var_548_1 = *(edi + 0xc)
            
            if ((ecx_4 & 4) != 0)
                var_530 = 2
            
            if ((ecx_4 & 8) != 0)
                var_530 = 3
            
            if ((ecx_4 & 0x10) != 0)
                var_530 = 4
            
            if ((ecx_4 & 0x20) != 0)
                var_530 = 5
    
    int32_t result = &arg2[arg3 * 0x2d + 8]
    int32_t i = sx.d(*(result + 0x26))
    
    if (i != 0xffffffff)
        int32_t ebx_1 = arg4
        int32_t var_52c[0x149]
        
        do
            int32_t edx_1 = i * 5
            void* eax_13 = arg2[edx_1 + 0x11b]
            
            if ((*(eax_13 + 0x10) & 2) != 0)
                eax_13.b = *(eax_13 + 0xe)
                
                if (eax_13.b != 0)
                    if (var_530 == 0)
                        goto label_4ac37c
                    
                    if (sx.d(eax_13.b) == var_530 || eax_13.b == 1)
                        ebx_1 = arg4
                    label_4ac37c:
                        
                        if (*(&arg2[edx_1] + 0x472) == 0
                                && (edi == 0 || (*(edi + 8) & 0x40) == 0 || i != ebx_1))
                            int32_t result_2 = result_1
                            var_52c[result_2] = i
                            result_1 = result_2 + 1
                    else
                        ebx_1 = arg4
            
            i = sx.d(arg2[i * 5 + 0x11d].w)
        while (i != 0xffffffff)
        
        result = result_1
        
        if (result != 0)
            if (result != 1)
                result =
                    sub_49d9e0(arg2, arg3, 0x13, &var_52c, &result_1, 0, nullptr, ebx_1, arg5, 0, 0)
                
                if (*(arg2 + 0x1ec3) == 0)
                    result = sub_4abcd0(arg5, arg2, arg3, var_52c[0], ebx_1, arg5)
            else
                result = sub_4abcd0(result, arg2, arg3, var_52c[0], ebx_1, arg5)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
