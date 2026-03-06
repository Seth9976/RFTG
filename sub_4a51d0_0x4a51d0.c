// 函数名称: sub_4a51d0
// 虚拟地址: 0x4a51d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_4a51d0(int32_t* arg1 @ esi, char* arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* result_1
    char* result
    int32_t ecx_1
    char* result_2
    
    if (arg1[6].b == 0)
        result, ecx_1 = sub_49ca40(arg1)
        result_1 = result
        result_2 = result
    else
        result, ecx_1 = sub_49cb90(arg1)
        result_2 = result
        result_1 = result_2
    
    if (result_2 != 0xffffffff)
        void* ebx_1 = &arg1[result_2 * 5]
        char var_40c[0x404]
        
        if (arg1[6].b == 0)
            int32_t var_420_1 = **(ebx_1 + 0x46c)
            int32_t var_424_1 = arg1[arg2 * 0x2d + 8]
            sub_5a733b(&var_40c, "%s flips %s.\n")
            int32_t eax_7
            int32_t edx_1
            eax_7, edx_1 = sub_4c5680(&var_40c)
            char (* var_420_2)[0x404] = &var_40c
            ecx_1 = sub_4591b0(eax_7, edx_1, arg1, arg2)
            result_2 = result_1
        
        void* eax_8 = *(ebx_1 + 0x46c)
        
        if (*(eax_8 + 6) != 1 || (*(eax_8 + 0x10) & 1) != 0)
            int32_t var_420_4 = 2
            sub_49cc30(arg1, result_2, ecx_1, arg2)
            result.w = 1 << arg2.b
            *(ebx_1 + 0x468) = (*(ebx_1 + 0x468) & 0xffc0) | result.w
            
            if (arg1[6].b == 0)
                int32_t var_420_5 = **(ebx_1 + 0x46c)
                int32_t var_424_6 = arg1[arg2 * 0x2d + 8]
                sub_5a733b(&var_40c, "%s takes %s into hand.\n")
                int32_t eax_14
                int32_t edx_7
                eax_14, edx_7 = sub_4c5680(&var_40c)
                char (* var_420_6)[0x404] = &var_40c
                result = sub_4591b0(eax_14, edx_7, arg1, arg2)
        else
            result = sub_4a4f00(sub_49f030(eax_8, result_2, arg1, arg2, 0), arg2, arg1, result_1, 0)
            
            if (*(arg1 + 0x1ec3) == 0)
                if (arg1[6].b == 0)
                    int32_t var_420_3 = **(ebx_1 + 0x46c)
                    int32_t var_424_4 = arg1[arg2 * 0x2d + 8]
                    sub_5a733b(&var_40c, "%s places %s at zero cost.\n")
                    sub_4c5680(&var_40c)
                
                *(ebx_1 + 0x468) &= 0xffbf
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 0xffbf
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
