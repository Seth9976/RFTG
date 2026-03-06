// 函数名称: sub_670410
// 虚拟地址: 0x670410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_670410(void* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* var_30
    int32_t var_2c
    uint8_t var_10
    
    if (arg3 != 3)
        if ((arg3.b & 2) == 0)
            int32_t ecx
            ecx.b = *(arg1 + 0x13c)
            uint32_t eax_6 = zx.d(*(arg2 + 8))
            
            if (eax_6 s>= 1 << ecx.b)
                uint32_t eax_7 =
                    sub_664100(arg1, "Ignoring attempt to write bKGD chunk out-of-range for bit_depth")
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_7
            
            var_10 = (eax_6 u>> 8).b
            char var_f_2 = eax_6.b
            sub_66f010(arg1, 2)
            sub_666640(arg1, &var_10, 2)
            var_2c = 2
        else
            uint32_t ecx_4 = zx.d(*(arg2 + 2))
            char var_f_1 = ecx_4.b
            uint32_t ecx_5 = zx.d(*(arg2 + 4))
            uint32_t eax_4 = zx.d(*(arg2 + 6))
            char var_d_1 = ecx_5.b
            uint8_t edx_3 = (ecx_4 u>> 8).b
            uint8_t ebx_2 = (ecx_5 u>> 8).b
            uint8_t ecx_7 = (eax_4 u>> 8).b
            bool cond:0_1 = *(arg1 + 0x13c) != 8
            var_10 = edx_3
            uint8_t var_e_1 = ebx_2
            uint8_t var_c_1 = ecx_7
            char var_b_1 = eax_4.b
            
            if (not(cond:0_1) && (ecx_7 | ebx_2 | edx_3) != 0)
                uint32_t eax_5 =
                    sub_664100(arg1, "Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8")
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_5
            
            sub_66f010(arg1, 6)
            sub_666640(arg1, &var_10, 6)
            var_2c = 6
        
        var_30 = &var_10
    else
        int16_t ecx_1 = *(arg1 + 0x12c)
        
        if ((ecx_1 != 0 || (*(arg1 + 0x258) & 1) == 0) && zx.w(*arg2) u>= ecx_1)
            uint32_t eax_3 = sub_664100(arg1, "Invalid background palette index")
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_3
        
        char* eax_2
        eax_2.b = *arg2
        var_10 = eax_2.b
        sub_66f010(arg1, 1)
        sub_666640(arg1, &var_10, 1)
        var_2c = 1
        var_30 = &var_10
    sub_662280(arg1, var_30, var_2c)
    int32_t eax_8 = sub_66f0f0(arg1)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_8
}
