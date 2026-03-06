// 函数名称: sub_6691e0
// 虚拟地址: 0x6691e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6691e0(char* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    char ecx = (*(arg1 + 0x6c)).b
    
    if ((ecx & 1) == 0)
        sub_664320(arg1, "Missing IHDR before tRNS")
        noreturn
    
    if ((ecx & 4) != 0)
        sub_664100(arg1, "Invalid tRNS after IDAT")
        int32_t eax_3 = sub_667b40(arg1, arg3)
        sub_5a6aba(var_8 ^ &__saved_ebp)
        return eax_3
    
    if (arg2 != 0 && (*(arg2 + 8) & 0x10) != 0)
        sub_664100(arg1, "Duplicate tRNS chunk")
        int32_t eax_4 = sub_667b40(arg1, arg3)
        sub_5a6aba(var_8 ^ &__saved_ebp)
        return eax_4
    
    int32_t eax_1
    eax_1.b = arg1[0x13b]
    void var_110
    int32_t var_12c_2
    int32_t edi_1
    
    if (eax_1.b == 0)
        edi_1 = arg3
        
        if (edi_1 != 2)
        label_669286:
            sub_664100(arg1, "Incorrect tRNS chunk length")
            var_12c_2 = edi_1
            goto label_669413
        
        int16_t var_114
        sub_6667f0(arg1, &var_114, 2)
        *(arg1 + 0x134) = 1
        int16_t eax_5 = var_114
        *(arg1 + 0x1b0) = zx.w(eax_5.b) * 0x100 + zx.w(eax_5:1.b)
    else if (eax_1.b != 2)
        if (eax_1.b != 3)
            sub_664100(arg1, "tRNS chunk not allowed with alpha channel")
            var_12c_2 = arg3
        label_669413:
            int32_t eax_15 = sub_667b40(arg1, var_12c_2)
            sub_5a6aba(var_8 ^ &__saved_ebp)
            return eax_15
        
        if ((ecx & 2) == 0)
            sub_664100(arg1, "Missing PLTE before tRNS")
        
        edi_1 = arg3
        
        if (edi_1 u> zx.d(*(arg1 + 0x12c)) || edi_1 u> 0x100)
            goto label_669286
        
        if (edi_1 == 0)
            sub_664100(arg1, "Zero length tRNS chunk")
            var_12c_2 = edi_1
            goto label_669413
        
        sub_6667f0(arg1, &var_110, edi_1)
        *(arg1 + 0x134) = edi_1.w
    else
        edi_1 = arg3
        
        if (edi_1 != 6)
            goto label_669286
        
        char var_10
        sub_6667f0(arg1, &var_10, edi_1)
        uint16_t eax_7 = zx.w(var_10) * 0x100
        *(arg1 + 0x134) = 1
        char var_f
        *(arg1 + 0x1aa) = eax_7 + zx.w(var_f)
        char var_e
        char var_d
        *(arg1 + 0x1ac) = zx.w(var_e) * 0x100 + zx.w(var_d)
        char var_c
        char var_b
        *(arg1 + 0x1ae) = zx.w(var_c) * 0x100 + zx.w(var_b)
    int32_t eax_11 = sub_667b40(arg1, 0)
    
    if (eax_11 == 0)
        int32_t eax_13 = sub_665080(arg1, arg2, &var_110, zx.d(*(arg1 + 0x134)), &arg1[0x1a8])
        sub_5a6aba(var_8 ^ &__saved_ebp)
        return eax_13
    
    *(arg1 + 0x134) = 0
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return eax_11
}
