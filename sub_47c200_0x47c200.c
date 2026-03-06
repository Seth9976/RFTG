// 函数名称: sub_47c200
// 虚拟地址: 0x47c200
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_47c200(int32_t* arg1, int32_t arg2, float* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t edx = *arg1
    int32_t edx = *arg1
    float var_28
    
    if (edx != 0)
        if (edx - 1 u> 1)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0xb51, "ControllerRay")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t esi = arg1[0x2220]
        int32_t edi = arg1[0x2221]
        int32_t ebx = arg1[0x2222]
        sub_405900(&var_28, edx - 1, &arg1[0x221c])
        float ecx_1 = var_28
        *arg4 = esi
        arg4[1] = edi
        arg4[2] = ebx
        arg4[3] = ecx_1
        int32_t var_24
        arg4[4] = var_24
        int32_t var_20
        arg4[5] = var_20
        return arg4
    
    long double x87_r7 = float.t(0)
    void* eax_4 = data_27e7fd0
    var_28 = fconvert.s(x87_r7)
    float var_7c = var_28
    float var_78 = fconvert.s(x87_r7)
    float var_74 = fconvert.s(float.t(*(eax_4 + 0x14)))
    float var_70 = fconvert.s(float.t(*(eax_4 + 0x18)))
    arg3[1]
    long double x87_r6 = float.t(1)
    long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(*arg3)))
    long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r6 / x87_r6)) * x87_r6_1))
    var_28 = fconvert.s(fneg(x87_r6_3))
    float var_8c = var_28
    float var_88 = fconvert.s(fneg(x87_r6_1))
    float var_84 = fconvert.s(x87_r6_3)
    float var_80 = fconvert.s(x87_r6_1)
    int32_t eax_9 = arg3[6]
    int32_t var_50 = arg3[5]
    int32_t var_4c = eax_9
    int32_t var_48 = arg3[7]
    int32_t var_44 = arg3[8]
    int32_t var_38 = arg3[0xb]
    int32_t var_40 = arg3[9]
    int32_t var_3c = arg3[0xa]
    void var_6c
    __builtin_memcpy(&var_6c, &var_50, 0x1c)
    void var_14
    int32_t eax_12
    int80_t st0
    st0, eax_12 = sub_4c6230(&var_14)
    int32_t* eax_13 = sub_4e4c10(eax_12, &var_14, &var_8c, &var_14)
    *arg4 = *eax_13
    arg4[1] = eax_13[1]
    arg4[2] = eax_13[2]
    arg4[3] = eax_13[3]
    int32_t eax_14 = eax_13[5]
    arg4[4] = eax_13[4]
    arg4[5] = eax_14
    return arg4
}
