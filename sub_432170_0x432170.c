// 函数名称: sub_432170
// 虚拟地址: 0x432170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_432170(void* arg1 @ esi, char arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_3 = *(data_27e7a40 + 0x548)
    
    if (eax_3 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    float eax_5 = *(eax_3 + 0x45844)
    
    if (arg2 == 0)
        eax_5.b = *(eax_5 i+ 0x458)
        
        if ((eax_5.b == 2 || eax_5.b == 4) && arg4 s> 6)
            float var_2c
            float var_1c
            int32_t edx
            
            if (arg3 s<= 2)
                sub_466130(&var_2c, edx, arg1 + 4)
                var_1c = var_2c
                long double x87_r6_1 = fconvert.t(0.070000000298023224)
                var_2c = fconvert.s(fconvert.t(var_1c) * x87_r6_1)
                float var_28
                float var_28_1 = fconvert.s(fconvert.t(var_28) * x87_r6_1)
                float var_24
                float var_24_1 = fconvert.s(x87_r6_1 * fconvert.t(var_24))
                *(arg1 + 0x14) = fconvert.s(fconvert.t(*(arg1 + 0x14)) - fconvert.t(var_2c))
                *(arg1 + 0x18) = fconvert.s(fconvert.t(*(arg1 + 0x18)) - fconvert.t(var_28_1))
                *(arg1 + 0x1c) = fconvert.s(fconvert.t(*(arg1 + 0x1c)) - fconvert.t(var_24_1))
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return var_24
            
            sub_466130(&var_1c, edx, arg1 + 4)
            float var_14
            eax_5 = var_14
            var_2c = var_1c
            long double x87_r6_5 = fconvert.t(0.070000000298023224)
            var_1c = fconvert.s(fconvert.t(var_2c) * x87_r6_5)
            float var_18
            float var_18_2 = fconvert.s(fconvert.t(var_18) * x87_r6_5)
            float var_14_2 = fconvert.s(x87_r6_5 * fconvert.t(eax_5))
            *(arg1 + 0x14) = fconvert.s(fconvert.t(var_1c) + fconvert.t(*(arg1 + 0x14)))
            *(arg1 + 0x18) = fconvert.s(fconvert.t(*(arg1 + 0x18)) + fconvert.t(var_18_2))
            *(arg1 + 0x1c) = fconvert.s(fconvert.t(*(arg1 + 0x1c)) + fconvert.t(var_14_2))
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_5
}
