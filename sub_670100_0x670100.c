// 函数名称: sub_670100
// 虚拟地址: 0x670100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_670100(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t result = sub_6637a0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
    
    if (result != 0)
        uint8_t var_28 = (arg2 u>> 0x18).b
        uint8_t var_27_1 = (arg2 u>> 0x10).b
        uint8_t var_26_1 = (arg2 u>> 8).b
        char var_25_1 = arg2.b
        uint8_t var_24_1 = (arg3 u>> 0x18).b
        uint8_t var_23_1 = (arg3 u>> 0x10).b
        uint8_t var_22_1 = (arg3 u>> 8).b
        char var_21_1 = arg3.b
        uint8_t var_20_1 = (arg4 u>> 0x18).b
        uint8_t var_1f_1 = (arg4 u>> 0x10).b
        uint8_t var_1e_1 = (arg4 u>> 8).b
        char var_1d_1 = arg4.b
        uint8_t var_1c_1 = (arg5 u>> 0x18).b
        uint8_t var_1b_1 = (arg5 u>> 0x10).b
        uint8_t var_1a_1 = (arg5 u>> 8).b
        char var_19_1 = arg5.b
        uint8_t var_18_1 = (arg6 u>> 0x18).b
        uint8_t var_17_1 = (arg6 u>> 0x10).b
        char var_15_1 = arg6.b
        uint8_t var_16_1 = (arg6 u>> 8).b
        uint8_t var_14_1 = (arg7 u>> 0x18).b
        uint8_t var_13_1 = (arg7 u>> 0x10).b
        char var_11_1 = arg7.b
        uint8_t var_12_1 = (arg7 u>> 8).b
        uint8_t var_10_1 = (arg8 u>> 0x18).b
        uint8_t var_f_1 = (arg8 u>> 0x10).b
        char var_d_1 = arg8.b
        uint8_t var_e_1 = (arg8 u>> 8).b
        uint8_t var_c_1 = (arg9 u>> 0x18).b
        result = arg9 u>> 0x10
        char var_b_1 = result.b
        uint8_t var_a_1 = (arg9 u>> 8).b
        char var_9_1 = arg9.b
        
        if (arg1 != 0)
            sub_66f010(arg1, 0x20)
            sub_666640(arg1, &var_28, 0x20)
            sub_662280(arg1, &var_28, 0x20)
            result = sub_66f0f0(arg1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
