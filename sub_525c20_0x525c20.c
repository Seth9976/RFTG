// 函数名称: sub_525c20
// 虚拟地址: 0x525c20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_525c20(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edx = *arg3
    float* var_2c = arg4
    void* ecx_5
    int32_t* edx_5
    int80_t result
    
    if (edx == 0)
        void* eax_10
        int80_t result_2
        result_2, eax_10 = sub_525760(arg2, arg4)
        result = result_2
        *arg3 = *(eax_10 + 0x19dc)
        edx_5 = arg2
        ecx_5 = eax_10
    else
        void* eax_2 = sub_530500(arg3, edx)
        *(eax_2 + 8) = *arg4
        *(eax_2 + 0xc) = arg4[1]
        *(eax_2 + 0x10) = arg4[2]
        *(eax_2 + 0x14) = arg4[3]
        int32_t var_20
        int32_t* eax_5 = sub_524d70(&var_20)
        int32_t edi_2 = eax_5[2]
        int32_t edx_2 = eax_5[1]
        int32_t eax_6 = eax_5[3]
        *(eax_2 + 0x14c8) = *eax_5
        *(eax_2 + 0x14cc) = edx_2
        *(eax_2 + 0x14d0) = edi_2
        *(eax_2 + 0x14d4) = eax_6
        void var_40
        int32_t* eax_7 = sub_524d70(&var_40)
        int32_t edx_3 = eax_7[1]
        var_20 = *eax_7
        int32_t var_1c_1 = edx_3
        int32_t var_18_1 = eax_7[2]
        int32_t var_14_1 = eax_7[3]
        int32_t eax_8
        int80_t result_1
        result_1, eax_8 = sub_4fb1d0(var_2c, &var_20)
        result = result_1
        void var_80
        __builtin_memcpy(&var_80, eax_8, 0x40)
        __builtin_memcpy(eax_2 + 0x18, &var_80, 0x40)
        sub_4c4590("<root>")
        edx_5 = arg2
        ecx_5 = eax_2
    
    sub_525a80(ecx_5, edx_5)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
