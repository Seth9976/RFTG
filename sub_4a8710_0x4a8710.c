// 函数名称: sub_4a8710
// 虚拟地址: 0x4a8710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a8710(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* edi = arg2
    void* eax_4 = &arg3[arg4 * 5 + 0x119]
    int32_t* result_1 = &arg3[edi * 0x2d + 8]
    int32_t var_43c = 1
    char* var_414 = edi
    sub_49cc30(arg3, sub_4a8360(edi, arg4, arg3), arg3, 0xffffffff)
    void* eax_8 = eax_4
    *(eax_8 + 0xe) -= 1
    int32_t result_2 = sx.d(*(*(eax_8 + 8) + 0xe))
    int32_t result
    char var_410[0x404]
    
    if (result_2 != 1)
    label_4a8842:
        int32_t eax_10 = sub_4a83b0(arg3, edi, eax_8, result_2, arg5)
        
        if (arg3[6].b == 0)
            sub_49bf50(edi)
            int32_t var_43c_4 = eax_10
            int32_t var_440_3 = **(eax_4 + 8)
            char* var_444_3 = var_414
            int32_t var_448_3 = *result_1
            sub_5a733b(&var_410, "%s [%d] trades good from %s for %d.\n")
            sub_4c5680(&var_410)
            
            if (arg6 != 0)
                void* edi_2 =
                    &var_414[sx.d(*(arg3 + 0x1ec2)) << 2] * 0x1c0 + *(data_27e7a40 + 0x548) + 0x2c0c0
                *(edi_2 + 0x118) = 1
                *(edi_2 + 0x11c) = sub_457850(arg4)
                *(edi_2 + 0x120) = eax_10
            
            edi = var_414
        
        sub_49cf20(arg3, edi, eax_10, nullptr)
        result = result_1
        *(result + 0x98) += eax_10.w
    else
        int32_t ecx_3
        result, ecx_3 = sub_49d9e0(arg3, edi, 0x18, nullptr, nullptr, 0, nullptr, 0, arg5, 0, 0)
        
        if (*(arg3 + 0x1ec3) == 0)
            arg3[0x7ad].b = result.b
            
            if (arg3[6].b == 0)
                int32_t var_43c_1 = (&data_8c6740)[result]
                int32_t var_440_1 = *result_1
                sub_5a733b(&var_410, "%s changes Alien Oort Cloud Refinery's kind to %s.\n")
                char const* const var_44c_1 = "verbose"
                char (* var_450_1)[0x404] = &var_410
                ecx_3 = sub_4c5680("%s (%s)")
            
            sub_4ae7d0(ecx_3, edi, 0xd, arg3)
            edi = var_414
            result_2 = result
            eax_8 = eax_4
            arg3[0x7ad].b = 1
            goto label_4a8842
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
