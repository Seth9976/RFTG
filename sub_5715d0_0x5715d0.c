// 函数名称: sub_5715d0
// 虚拟地址: 0x5715d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5715d0(float* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?_Reset@?$_Greedy_node@W4agent_status@Concurrency@@@Concurrency@@UAEXXZ
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_b8 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = data_26a7764 != 0
    data_2727bb8 = 0xffffffff
    void var_a8
    void var_74
    
    if (cond:0)
        int32_t var_44_1 = data_273abc4
        int32_t ecx_5 = data_273abd0
        int32_t var_bc_2 = ecx_5
        int32_t var_40_1 = data_273abc8
        int32_t var_3c_1 = data_273abcc
        int32_t var_38_1 = ecx_5
        long double x87_r7_7 =
            fconvert.t(fconvert.s(fconvert.t(data_273abd8) - fconvert.t(data_27e8010)))
        long double x87_r6_1 =
            fconvert.t(fconvert.s(fconvert.t(data_273abd4) - fconvert.t(data_27e800c)))
        long double x87_r5_1 =
            fconvert.t(fconvert.s(fconvert.t(data_273abdc) - fconvert.t(data_27e8014)))
        long double x87_r7_13 = sub_413560(fconvert.s(fconvert.t(fconvert.s(x87_r7_7 * x87_r7_7
            + x87_r6_1 * x87_r6_1 + x87_r5_1 * x87_r5_1)))) / fconvert.t(10.0)
        bool cond:1_1 = data_273abf0 == 3
        float var_48 = fconvert.s(x87_r7_13)
        
        if (not(cond:1_1))
            int32_t var_44_2 = 0
            int32_t var_40_2 = 0
            int32_t var_3c_2 = 0
            int32_t var_38_2 = 0x3f800000
        
        bool cond:2_1 = (data_3166264 & 1) != 0
        __builtin_memcpy(&var_74, &var_48, 0x20)
        
        if (not(cond:2_1))
            data_3166264.d |= 1
            int32_t var_8_1 = 0
            data_3166260 = sub_509140(0x20, "sys/editor/translate.fab")
            int32_t var_8_2 = 0xffffffff
        
        if ((data_3166264 & 2) == 0)
            data_3166264.d |= 2
            int32_t var_8_3 = 1
            data_316625c = sub_509140(0x20, "sys/editor/rotate_quarter.fab")
            int32_t var_8_4 = 0xffffffff
        
        if ((data_3166264 & 4) == 0)
            data_3166264.d |= 4
            int32_t var_8_5 = 2
            data_3166258 = sub_509140(0x20, "sys/editor/scale.fab")
            int32_t var_8_6 = 0xffffffff
        
        int32_t eax_9 = data_273abf0
        int32_t var_c0
        void* var_bc_4
        
        if (eax_9 == 2)
            var_bc_4 = &var_a8
            var_c0 = data_3166260
        label_5717fb:
            data_2727bb4
            int32_t eax_14
            int32_t edx_6
            eax_14, edx_6 = sub_50cce0(var_c0, var_bc_4)
            int32_t eax_15
            int80_t st0_2
            st0_2, eax_15 = sub_5100b0(eax_14, edx_6, data_2727bb4, arg1)
            data_2727bb8 = eax_15
            eax_15.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_15
        
        if (eax_9 == 3)
            var_bc_4 = &var_a8
            var_c0 = data_316625c
            goto label_5717fb
        
        if (eax_9 == 4)
            var_bc_4 = &var_a8
            var_c0 = data_3166258
            goto label_5717fb
        
        __builtin_memcpy(&var_74, &data_be4c5c, 0x20)
    else
        __builtin_memcpy(&var_74, &data_be4c5c, 0x20)
        data_273abf0 = 0
    data_2727bb4
    sub_50cce0(0, &var_a8)
    int32_t eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3
}
