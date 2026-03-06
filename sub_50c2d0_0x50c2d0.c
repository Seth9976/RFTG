// 函数名称: sub_50c2d0
// 虚拟地址: 0x50c2d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_50c2d0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, void* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edx = *(arg5 + 0x480)
    void* esi = arg5 + 0x484
    
    if (edx s<= *(arg5 + 0x5c))
        esi = &arg3[2]
    
    float var_ac
    __builtin_memcpy(&var_ac, esi, 0x24)
    float var_4c
    __builtin_memcpy(&var_4c, &var_ac, 0x24)
    void* esi_1 = arg5 + 0x484
    
    if (edx s<= *(arg5 + 0x5c))
        esi_1 = &arg3[2]
    
    void var_dc
    __builtin_memcpy(&var_dc, esi_1, 0x24)
    float var_64
    int32_t* eax_3 = sub_50c1b0(&var_64, arg3)
    float var_c4
    float var_84 = fconvert.s(fconvert.t(var_c4) * fconvert.t(*eax_3))
    float var_c0
    float var_80 = fconvert.s(fconvert.t(var_c0) * fconvert.t(eax_3[1]))
    float var_bc
    float var_7c = fconvert.s(fconvert.t(var_bc) * fconvert.t(eax_3[2]))
    float var_ec
    float var_40
    float* eax_5 = sub_465b90(&var_ec, &var_40)
    int32_t ecx_1 = eax_5[3]
    float esi_2 = *eax_5
    float edi_2 = eax_5[1]
    int32_t edx_2 = eax_5[2]
    int32_t ecx_2 = *arg3
    var_64 = esi_2
    float var_60 = edi_2
    float var_50
    float var_a8
    float var_a4
    int32_t var_3c_2
    int32_t var_38_2
    
    if (ecx_2 s<= 0)
    label_50c769:
        var_50 = var_ac
        var_4c = var_a8
        float var_48_3 = var_a4
        float var_34_3 = var_84
        float var_30_3 = var_80
        float var_2c_3 = var_7c
        float var_44_3 = esi_2
        int32_t ecx_10 = eax_5[2]
        var_40 = edi_2
        var_3c_2 = ecx_10
        var_38_2 = eax_5[3]
    else
        float var_1c
        
        if (ecx_2 s<= 2)
            int32_t ecx_12 = arg3[0xf]
            float esi_3 = data_27e800c
            float edi_3 = data_27e8010
            float ebx_1 = data_27e8014
            
            if (ecx_12 u> 3)
                sub_4c5870("Halt", &data_83f3d3, "FabDef.cpp", 0x162, "ElBox")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            float* var_1a8_1
            float var_70
            float esi_4
            float edi_4
            long double x87_r7_12
            
            switch (ecx_12)
                case 0
                    var_50 = var_ac
                    var_4c = var_a8
                    float var_48_1 = var_a4
                    float var_34_1 = var_84
                    float var_30_1 = var_80
                    float var_2c_1 = var_7c
                    float var_44_1 = *eax_5
                    int32_t edx_14 = eax_5[2]
                    int32_t eax_14 = eax_5[3]
                    var_40 = eax_5[1]
                    int32_t var_3c = edx_14
                    int32_t var_38 = eax_14
                case 1
                    float var_fc
                    sub_465a20(&var_fc, edx_2, &data_27e7ffc)
                    var_1c = var_fc
                    float var_12c
                    float var_f8
                    sub_405900(&var_12c, var_f8, &data_27e7ffc)
                    esi_4 = var_ac
                    edi_4 = var_a8
                    float var_128
                    float var_124
                    float var_f4
                    sub_4e21d0(0, esi_4, edi_4, var_a4, esi_3, edi_3, ebx_1, var_1c, var_f8, var_f4, 
                        var_12c, var_128, var_124, &var_60)
                    x87_r7_12 = fconvert.t(-0f)
                    var_1c = fconvert.s(x87_r7_12)
                    float var_28_2 = var_1c
                    var_1a8_1 = &var_70
                label_50c5a2:
                    float var_48_2 = var_a4
                    float var_14_4 = fconvert.s(fconvert.t(-1f))
                    float var_24_2 = fconvert.s(x87_r7_12)
                    var_50 = esi_4
                    var_4c = edi_4
                    float var_20_2 = var_14_4
                    float* eax_21 = sub_4137a0(0x840740, var_1a8_1)
                    float var_44_2 = *eax_21
                    int32_t edx_22 = eax_21[2]
                    int32_t eax_22 = eax_21[3]
                    var_40 = eax_21[1]
                    int32_t var_3c_1 = edx_22
                    int32_t var_38_1 = eax_22
                    float var_34_2 = var_84
                    float var_30_2 = var_80
                    float var_2c_2 = var_7c
                case 2
                    esi_4 = var_ac
                    edi_4 = var_a8
                    sub_4e21d0(1, esi_4, edi_4, var_a4, esi_3, edi_3, ebx_1, 0f, 0f, 1f, 0f, 0f, 0f, 
                        &var_70)
                    x87_r7_12 = fconvert.t(-0f)
                    var_1c = fconvert.s(x87_r7_12)
                    float var_28_4 = var_1c
                    var_1a8_1 = &var_60
                    goto label_50c5a2
                case 3
                    sub_466130(&var_ec, edx_2, &data_27e7ffc)
                    esi_4 = var_ac
                    edi_4 = var_a8
                    float var_e8
                    float var_e4
                    sub_4e21d0(3, esi_4, edi_4, var_a4, esi_3, edi_3, ebx_1, 0f, 0f, 1f, var_ec, 
                        var_e8, var_e4, &var_70)
                    x87_r7_12 = fconvert.t(-0f)
                    var_1c = fconvert.s(x87_r7_12)
                    float var_28_3 = var_1c
                    var_1a8_1 = &var_60
                    goto label_50c5a2
        else
            if (ecx_2 != 3)
                goto label_50c769
            
            int32_t* eax_7 = sub_4d5460(arg3[0x16])
            float var_10c
            float* eax_8 = sub_4d8430(eax_7, &var_10c, *eax_7 + 0x20, &var_10c)
            int32_t edx_4 = eax_8[1]
            int32_t eax_9 = eax_8[2]
            var_1c = *eax_8
            int32_t var_18_1 = edx_4
            int32_t var_14_1 = eax_9
            float var_11c
            sub_405970(&var_11c, &var_1c, &var_64)
            var_1c = fconvert.s(fconvert.t(var_ac) + fconvert.t(var_11c))
            var_50 = var_1c
            float var_34 = var_84
            float var_118
            var_4c = fconvert.s(fconvert.t(var_a8) + fconvert.t(var_118))
            float var_30 = var_80
            float var_114
            float var_48 = fconvert.s(fconvert.t(var_a4) + fconvert.t(var_114))
            float var_2c = var_7c
            float var_44 = esi_2
            var_40 = edi_2
            var_3c_2 = edx_2
            var_38_2 = ecx_1
    __builtin_memcpy(arg4, &var_50, 0x28)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}
