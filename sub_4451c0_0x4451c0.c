// 函数名称: sub_4451c0
// 虚拟地址: 0x4451c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_4451c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = *arg1
    float var_2c
    float var_18
    float var_14_1
    float var_10_1
    float var_28_2
    long double x87_r7_7
    
    if (eax_2 != 0 && eax_2 != 1)
        if (eax_2 != 6)
            if (eax_2 != 4)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x427f, "OBBoxCard")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            data_307c1d8
            
            if (arg1[0x21] s< 0xc)
                data_307c1dc
            
            void var_1c
            int32_t* eax_6 = sub_4f60d0(&var_1c)
            float edx_3 = eax_6[1]
            var_2c = *eax_6
            float var_10_2 = fconvert.s(fconvert.t(eax_6[3]) - fconvert.t(edx_3))
            var_2c = fconvert.s(fconvert.t(fconvert.s(fconvert.t(eax_6[2]) - fconvert.t(var_2c))))
            var_28_2 = fconvert.s(float.t(0))
            x87_r7_7 = fconvert.t(var_10_2)
            goto label_4452b6
        
        float* eax_4 = sub_432f80(&var_2c)
        var_18 = *eax_4
        var_14_1 = eax_4[1]
        var_10_1 = eax_4[2]
    else
        void* eax_3 = sub_4f4890(data_307c104)
        float edx = *(eax_3 + 0xc)
        var_2c = *(eax_3 + 8)
        float var_30_1 = fconvert.s(fconvert.t(*(eax_3 + 0x14)) - fconvert.t(edx))
        var_2c = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(eax_3 + 0x10)) - fconvert.t(var_2c))))
        var_28_2 = fconvert.s(float.t(0))
        x87_r7_7 = fconvert.t(var_30_1)
    label_4452b6:
        var_10_1 = fconvert.s(x87_r7_7)
        var_14_1 = var_28_2
        var_18 = var_2c
    int32_t ecx_6 = arg1[9]
    int32_t edx_6 = arg1[0xa]
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(arg1[3])))
    int32_t* entry_result
    *entry_result = arg1[8]
    int32_t eax_9 = arg1[4]
    entry_result[1] = ecx_6
    int32_t ecx_7 = arg1[5]
    entry_result[3] = eax_9
    int32_t eax_10 = arg1[7]
    var_2c = fconvert.s(fconvert.t(var_18) * x87_r6)
    entry_result[4] = ecx_7
    float ecx_8 = var_2c
    entry_result[2] = edx_6
    int32_t edx_7 = arg1[6]
    float var_28_4 = fconvert.s(fconvert.t(var_14_1) * x87_r6)
    entry_result[7] = ecx_8
    entry_result[5] = edx_7
    entry_result[6] = eax_10
    float var_24_4 = fconvert.s(x87_r6 * fconvert.t(var_10_1))
    entry_result[8] = var_28_4
    entry_result[9] = var_24_4
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return entry_result
}
