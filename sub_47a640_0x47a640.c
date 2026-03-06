// 函数名称: sub_47a640
// 虚拟地址: 0x47a640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_47a640(int32_t arg1, float* arg2, int32_t arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_84 = arg3
    float var_60 = fconvert.s(float.t(0))
    long double x87_r7_7 = fconvert.t(fconvert.s(fconvert.t(arg2[5]) - fconvert.t(arg4[1])))
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(arg2[4]) - fconvert.t(*arg4)))
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(arg2[6]) - fconvert.t(arg4[2])))
    float var_5c = fconvert.s(sub_413560(fconvert.s(fconvert.t(fconvert.s(x87_r7_7 * x87_r7_7
        + x87_r6 * x87_r6 + x87_r5 * x87_r5)))))
    float var_58 = fconvert.s(float.t(0))
    float var_30 = var_60
    float var_2c = var_5c
    float var_28 = var_58
    float var_70
    sub_405970(&var_70, &var_30, arg2)
    float ecx_3 = *arg2
    int32_t edx_3 = arg2[1]
    var_30 = fconvert.s(fconvert.t(var_70) + fconvert.t(arg2[4]))
    float var_4c = ecx_3
    int32_t var_48 = edx_3
    int32_t var_44 = arg2[2]
    int32_t var_40 = arg2[3]
    float var_3c = var_30
    float var_6c
    float var_38 = fconvert.s(fconvert.t(arg2[5]) + fconvert.t(var_6c))
    float var_68
    float var_34 = fconvert.s(fconvert.t(arg2[6]) + fconvert.t(var_68))
    int32_t* esi_1 = nullptr
    float var_50 = fconvert.s(fconvert.t(var_5c) * fconvert.t(0.001500000013038516))
    long double x87_r7_22 = float.t(0)
    float var_1c_2 = fconvert.s(x87_r7_22)
    float var_18_3 = fconvert.s(x87_r7_22)
    
    if (arg3 == 2)
        long double x87_r7_23 = fconvert.t(15f)
        esi_1 = data_307cab4
        var_1c_2 = fconvert.s(x87_r7_23)
        var_18_3 = fconvert.s(x87_r7_23)
    else if (arg3 == 1)
        long double x87_r7_24 = fconvert.t(15f)
        esi_1 = data_307cac0
        var_1c_2 = fconvert.s(x87_r7_24)
        var_18_3 = fconvert.s(x87_r7_24)
    
    sub_4dad50()
    *(data_27e7fe4 + 0x254) = data_307cc78
    
    if (data_3078599 == 0)
        sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x326, 
            "Draw3DLayer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi_1 = data_27e853c
    data_27e853c = 0x7d4
    int80_t result = sub_4d9da0(esi_1, fconvert.s(fneg(fconvert.t(var_1c_2))), 
        fconvert.s(fneg(fconvert.t(var_18_3))))
    
    if (data_3078599 != 0)
        void* eax_13 = data_27e7fe4
        data_27e853c = edi_1
        *(eax_13 + 0x254) = 0
        __builtin_memcpy(eax_13 + 0x9c, 0x83faf8, 0x40)
        *(eax_13 + 0xdc) = 0
        sub_4e2080()
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x326, "Draw3DLayer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
