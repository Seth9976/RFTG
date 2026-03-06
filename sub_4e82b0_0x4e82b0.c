// 函数名称: sub_4e82b0
// 虚拟地址: 0x4e82b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4e82b0(float* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* edi = arg1
    float var_bc
    int32_t* var_e0 = &var_bc
    int32_t var_e4 = arg2
    int32_t result = sub_4e9910(edi, arg2, arg1)
    int32_t* var_74
    
    if (var_74 != 0)
        void* eax_5 = arg2 * 0x60 + edi[0x1a]
        int32_t* eax_6 = *(eax_5 + 0x50)
        
        if (eax_6 != 0)
            var_74 = eax_6
        
        void var_7c
        int32_t result_1 = sub_4ccda0(&edi[0x18], &var_7c)
        int32_t var_cc = sub_4ccda0(&result_1, eax_5 + 0x58)
        void var_78
        result = sub_4e8240(&edi[0x19], &var_78)
        bool cond:0_1 = var_cc:3.b == 0
        result_1 = result
        
        if (not(cond:0_1))
            long double x87_r7_1 = fconvert.t(var_bc)
            float var_b4
            float var_68 = var_b4
            float var_b8
            long double x87_r5_1 = fconvert.t(var_b8)
            int32_t var_b0
            int32_t var_64_1 = var_b0
            int32_t var_a4
            int32_t var_60_1 = var_a4
            float* entry_ebx
            float var_c0_1 = fconvert.s(x87_r7_1 * fconvert.t(entry_ebx[4])
                + x87_r5_1 * fconvert.t(entry_ebx[5]) + fconvert.t(entry_ebx[7]))
            float var_ac
            long double x87_r7_5 = fconvert.t(var_ac)
            float var_a8
            long double x87_r5_4 = fconvert.t(var_a8)
            float var_c4_2 = fconvert.s(x87_r7_5 * fconvert.t(*entry_ebx)
                + x87_r5_4 * fconvert.t(entry_ebx[1]) + fconvert.t(entry_ebx[3]))
            int32_t var_a0
            int32_t var_5c_1 = var_a0
            int32_t var_94
            int32_t var_58_1 = var_94
            float var_c0_2 = fconvert.s(x87_r7_5 * fconvert.t(entry_ebx[4])
                + x87_r5_4 * fconvert.t(entry_ebx[5]) + fconvert.t(entry_ebx[7]))
            float var_9c
            long double x87_r7_9 = fconvert.t(var_9c)
            float var_98
            long double x87_r5_7 = fconvert.t(var_98)
            float var_c4_3 = fconvert.s(x87_r7_9 * fconvert.t(*entry_ebx)
                + x87_r5_7 * fconvert.t(entry_ebx[1]) + fconvert.t(entry_ebx[3]))
            int32_t var_90
            int32_t var_54_1 = var_90
            float var_c0_3 = fconvert.s(x87_r7_9 * fconvert.t(entry_ebx[4])
                + x87_r5_7 * fconvert.t(entry_ebx[5]) + fconvert.t(entry_ebx[7]))
            float var_8c
            long double x87_r7_13 = fconvert.t(var_8c)
            float var_88
            long double x87_r5_10 = fconvert.t(var_88)
            void* eax_13 = data_27e7fe0
            int32_t var_84
            int32_t var_50_1 = var_84
            int32_t var_80
            int32_t var_4c_1 = var_80
            float var_c4_4 = fconvert.s(x87_r7_13 * fconvert.t(*entry_ebx)
                + x87_r5_10 * fconvert.t(entry_ebx[1]) + fconvert.t(entry_ebx[3]))
            float var_c0_4 = fconvert.s(x87_r7_13 * fconvert.t(entry_ebx[4])
                + x87_r5_10 * fconvert.t(entry_ebx[5]) + fconvert.t(entry_ebx[7]))
            float var_48 = fconvert.s(fconvert.t(*(eax_13 + 0x20)) + fconvert.t(fconvert.s(
                x87_r7_1 * fconvert.t(*entry_ebx) + x87_r5_1 * fconvert.t(entry_ebx[1])
                + fconvert.t(entry_ebx[3]))))
            float var_44_1 = fconvert.s(fconvert.t(var_c0_1) + fconvert.t(*(eax_13 + 0x24)))
            float var_40_1 = fconvert.s(fconvert.t(*(eax_13 + 0x20)) + fconvert.t(var_c4_2))
            float var_3c_1 = fconvert.s(fconvert.t(var_c0_2) + fconvert.t(*(eax_13 + 0x24)))
            float var_38_1 = fconvert.s(fconvert.t(*(eax_13 + 0x20)) + fconvert.t(var_c4_3))
            float var_34_1 = fconvert.s(fconvert.t(var_c0_3) + fconvert.t(*(eax_13 + 0x24)))
            float var_30_1 = fconvert.s(fconvert.t(*(eax_13 + 0x20)) + fconvert.t(var_c4_4))
            int32_t* eax_14 = edi[0x21]
            float var_2c_1 = fconvert.s(fconvert.t(var_c0_4) + fconvert.t(*(eax_13 + 0x24)))
            result = sub_4d8cf0(eax_14, &var_48, var_74, &var_68, &var_cc, eax_14)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
