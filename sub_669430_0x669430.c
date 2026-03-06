// 函数名称: sub_669430
// 虚拟地址: 0x669430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_669430(char* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    char ecx = (*(arg1 + 0x6c)).b
    
    if ((ecx & 1) == 0)
        sub_664320(arg1, "Missing IHDR before bKGD")
        noreturn
    
    if ((ecx & 4) != 0)
        sub_664100(arg1, "Invalid bKGD after IDAT")
        int32_t eax_3 = sub_667b40(arg1, arg3)
        sub_5a6aba(var_8 ^ &__saved_ebp)
        return eax_3
    
    int32_t eax_1
    eax_1.b = arg1[0x13b]
    
    if (eax_1.b == 3 && (ecx & 2) == 0)
        sub_664100(arg1, "Missing PLTE before bKGD")
        int32_t eax_4 = sub_667b40(arg1, arg3)
        sub_5a6aba(var_8 ^ &__saved_ebp)
        return eax_4
    
    if (arg2 != 0 && (*(arg2 + 8) & 0x20) != 0)
        sub_664100(arg1, "Duplicate bKGD chunk")
        int32_t eax_5 = sub_667b40(arg1, arg3)
        sub_5a6aba(var_8 ^ &__saved_ebp)
        return eax_5
    
    int32_t esi
    
    if (eax_1.b != 3)
        esi = ((zx.d(eax_1.b) & 2) | 1) * 2
    else
        esi = 1
    
    if (arg3 != esi)
        sub_664100(arg1, "Incorrect bKGD chunk length")
        int32_t eax_6 = sub_667b40(arg1, arg3)
        sub_5a6aba(var_8 ^ &__saved_ebp)
        return eax_6
    
    char var_10
    sub_664410(arg1, &var_10, esi)
    sub_662280(arg1, &var_10, esi)
    int32_t eax_7 = sub_667b40(arg1, 0)
    
    if (eax_7 == 0)
        eax_7.b = arg1[0x13b]
        char var_1c
        uint16_t eax_14
        
        if (eax_7.b != 3)
            char var_f
            uint16_t edx_5 = zx.w(var_f)
            eax_14 = zx.w(var_10)
            var_1c = 0
            
            if ((eax_7.b & 2) != 0)
                uint16_t var_1a_4 = eax_14 * 0x100 + edx_5
                char var_e
                char var_d
                uint16_t var_18_3 = zx.w(var_e) * 0x100 + zx.w(var_d)
                char var_c
                char var_b
                uint16_t var_16_3 = zx.w(var_c) * 0x100 + zx.w(var_b)
                eax_14 = 0
            else
                eax_14 = eax_14 * 0x100 + edx_5
                uint16_t var_16_2 = eax_14
                uint16_t var_18_2 = eax_14
                uint16_t var_1a_3 = eax_14
        else
            char ecx_10 = var_10
            var_1c = ecx_10
            int16_t eax_9
            
            if (arg2 != 0)
                eax_9 = *(arg2 + 0x14)
            
            if (arg2 == 0 || eax_9 == 0)
                int16_t var_18
                var_18.d = 0
                int16_t var_1a_2 = 0
            else
                if (zx.w(ecx_10) u>= eax_9)
                    uint32_t eax_10 = sub_664100(arg1, "Incorrect bKGD chunk index value")
                    sub_5a6aba(var_8 ^ &__saved_ebp)
                    return eax_10
                
                char* eax_13 = zx.d(ecx_10) * 3 + *(arg1 + 0x128)
                uint16_t var_1a_1 = zx.w(*eax_13)
                uint16_t var_18_1 = zx.w(eax_13[1])
                uint16_t var_16_1 = zx.w(eax_13[2])
            
            eax_14 = 0
        
        uint16_t var_14_1 = eax_14
        eax_7 = sub_6644d0(arg1, arg2, &var_1c)
    
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return eax_7
}
